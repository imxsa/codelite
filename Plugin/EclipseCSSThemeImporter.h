//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// Copyright            : (C) 2015 Eran Ifrah
// File name            : EclipseCSSThemeImporter.h
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

#ifndef ECLIPSECSSTHEMEIMPORTER_H
#define ECLIPSECSSTHEMEIMPORTER_H

#include "EclipseThemeImporterBase.h" // Base class: EclipseThemeImporterBase

class WXDLLIMPEXP_SDK EclipseCSSThemeImporter : public EclipseThemeImporterBase
{
public:
    EclipseCSSThemeImporter();
    virtual ~EclipseCSSThemeImporter();

public:
    virtual LexerConf::Ptr_t Import(const wxFileName& eclipseXmlFile);
};

#endif // ECLIPSECSSTHEMEIMPORTER_H
