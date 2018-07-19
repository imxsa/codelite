//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// copyright            : (C) 2014 Eran Ifrah
// file name            : wxterminalbase.cpp
//
// -------------------------------------------------------------------------
// A
//              _____           _      _     _ _
//             /  __ \         | |    | |   (_) |
//             | /  \/ ___   __| | ___| |    _| |_ ___
//             | |    / _ \ / _  |/ _ \ |   | | __/ _ )
//             | \__/\ (_) | (_| |  __/ |___| | ||  __/
//              \____/\___/ \__,_|\___\_____/_|\__\___|
//
//                                                  F i l e
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 16 2008)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "ColoursAndFontsManager.h"
#include "lexer_configuration.h"
#include "wxterminalbase.h"

///////////////////////////////////////////////////////////////////////////

wxTerminalBase::wxTerminalBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    wxBoxSizer* mainSizer;
    mainSizer = new wxBoxSizer(wxVERTICAL);

    m_textCtrl = new wxStyledTextCtrl(this);
    LexerConf::Ptr_t lexer = ColoursAndFontsManager::Get().GetLexer("text");
    if(lexer) {
        lexer->Apply(m_textCtrl);
    }
    mainSizer->Add(m_textCtrl, 1, wxEXPAND, 0);
    this->SetSizer(mainSizer);
    this->Layout();
    mainSizer->Fit(this);

    // Connect Events
    m_textCtrl->Bind(wxEVT_KEY_DOWN, &wxTerminalBase::OnKey, this);
}

wxTerminalBase::~wxTerminalBase()
{
    m_textCtrl->Unbind(wxEVT_KEY_DOWN, &wxTerminalBase::OnKey, this);
}

void wxTerminalBase::OnKey(wxKeyEvent& event)
{
    switch(event.GetKeyCode()) {
    case WXK_DOWN:
        OnDown(event);
        break;
    case WXK_UP:
        OnUp(event);
        break;
    case WXK_RIGHT:
        OnRight(event);
        break;
    case WXK_LEFT:
        OnLeft(event);
        break;
    case WXK_NUMPAD_ENTER:
    case WXK_RETURN:
        OnEnter(event);
        break;
    default:
        event.Skip();
    }
}
