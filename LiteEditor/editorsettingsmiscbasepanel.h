//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: editor_options_misc.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef _CODELITE_LITEEDITOR_EDITOR_OPTIONS_MISC_BASE_CLASSES_H
#define _CODELITE_LITEEDITOR_EDITOR_OPTIONS_MISC_BASE_CLASSES_H

#include <wx/arrstr.h>
#include <wx/artprov.h>
#include <wx/bannerwindow.h>
#include <wx/button.h>
#include <wx/checkbox.h>
#include <wx/choice.h>
#include <wx/imaglist.h>
#include <wx/notebook.h>
#include <wx/panel.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/xrc/xmlres.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/treebook.h>
#endif

#ifdef WXC_FROM_DIP
#undef WXC_FROM_DIP
#endif
#if wxVERSION_NUMBER >= 3100
#define WXC_FROM_DIP(x) wxWindow::FromDIP(x, NULL)
#else
#define WXC_FROM_DIP(x) x
#endif

class EditorSettingsMiscBasePanel : public wxPanel
{
protected:
    wxNotebook* m_notebook2;
    wxPanel* m_panel1;
    wxStaticText* m_staticText7;
    wxChoice* m_choiceIconSet;
    wxStaticText* m_staticText8;
    wxChoice* m_toolbarIconSize;
    wxCheckBox* m_showSplashScreen;
    wxCheckBox* m_singleAppInstance;
    wxCheckBox* m_versionCheckOnStartup;
    wxCheckBox* m_checkBoxPromptReleaseOnly;
    wxCheckBox* m_checkBoxRestoreSession;
    wxStaticText* m_staticText79;
    wxTextCtrl* m_webSearchPrefix;
    wxPanel* m_panel23;
    wxBannerWindow* m_banner27;
    wxStaticText* m_staticText31;
    wxStaticText* m_staticText33;
    wxStaticText* m_staticText35;
    wxStaticText* m_staticText37;
    wxStaticText* m_staticText39;
    wxStaticText* m_staticText41;
    wxStaticText* m_staticText43;
    wxStaticText* m_staticText45;
    wxStaticText* m_staticText47;
    wxStaticText* m_staticText49;
    wxTextCtrl* m_textCtrlPattern;
    wxPanel* m_panel44;
    wxStaticText* m_staticText70;
    wxCheckBox* m_statusbarShowLine;
    wxCheckBox* m_statusbarShowCol;
    wxCheckBox* m_statusbarShowPos;
    wxCheckBox* m_statusbarShowFileLength;
    wxCheckBox* m_statusBarShowSelChars;
    wxPanel* m_panelTBar;
    wxStaticText* m_staticText94;
    wxTextCtrl* m_textCtrlSeparation;
    wxStaticText* m_staticText97;
    wxPanel* m_panel2;
    wxStaticText* m_staticText1;
    wxChoice* m_fileEncoding;
    wxCheckBox* m_SetLocale;
    wxStaticText* m_staticTextLocale;
    wxChoice* m_AvailableLocales;
    wxPanel* m_panel3;
    wxStaticText* m_staticText2;
    wxButton* m_clearButton;
    wxStaticText* m_staticText3;
    wxTextCtrl* m_maxItemsFindReplace;
    wxStaticText* m_staticText4;
    wxTextCtrl* m_spinCtrlMaxOpenTabs;
    wxStaticText* m_staticText53;
    wxButton* m_buttonAnnoyingDialogs;
    wxPanel* m_panel4;
    wxStaticText* m_staticText6;
    wxChoice* m_choice4;
    wxButton* m_buttonOpenLog;
    wxCheckBox* m_redirectLogOutput;

protected:
    virtual void OnPromptStableReleaseUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void LocaleChkUpdateUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void LocaleStaticUpdateUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void LocaleChoiceUpdateUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnClearButtonClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnClearUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnResetAnnoyingDialogsAnswers(wxCommandEvent& event) { event.Skip(); }
    virtual void OnLogVerbosityChanged(wxCommandEvent& event) { event.Skip(); }
    virtual void OnShowLogFile(wxCommandEvent& event) { event.Skip(); }
    virtual void OnLogoutputCheckUpdateUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText7() { return m_staticText7; }
    wxChoice* GetChoiceIconSet() { return m_choiceIconSet; }
    wxStaticText* GetStaticText8() { return m_staticText8; }
    wxChoice* GetToolbarIconSize() { return m_toolbarIconSize; }
    wxCheckBox* GetShowSplashScreen() { return m_showSplashScreen; }
    wxCheckBox* GetSingleAppInstance() { return m_singleAppInstance; }
    wxCheckBox* GetVersionCheckOnStartup() { return m_versionCheckOnStartup; }
    wxCheckBox* GetCheckBoxPromptReleaseOnly() { return m_checkBoxPromptReleaseOnly; }
    wxCheckBox* GetCheckBoxRestoreSession() { return m_checkBoxRestoreSession; }
    wxStaticText* GetStaticText79() { return m_staticText79; }
    wxTextCtrl* GetWebSearchPrefix() { return m_webSearchPrefix; }
    wxPanel* GetPanel1() { return m_panel1; }
    wxBannerWindow* GetBanner27() { return m_banner27; }
    wxStaticText* GetStaticText31() { return m_staticText31; }
    wxStaticText* GetStaticText33() { return m_staticText33; }
    wxStaticText* GetStaticText35() { return m_staticText35; }
    wxStaticText* GetStaticText37() { return m_staticText37; }
    wxStaticText* GetStaticText39() { return m_staticText39; }
    wxStaticText* GetStaticText41() { return m_staticText41; }
    wxStaticText* GetStaticText43() { return m_staticText43; }
    wxStaticText* GetStaticText45() { return m_staticText45; }
    wxStaticText* GetStaticText47() { return m_staticText47; }
    wxStaticText* GetStaticText49() { return m_staticText49; }
    wxTextCtrl* GetTextCtrlPattern() { return m_textCtrlPattern; }
    wxPanel* GetPanel23() { return m_panel23; }
    wxStaticText* GetStaticText70() { return m_staticText70; }
    wxCheckBox* GetStatusbarShowLine() { return m_statusbarShowLine; }
    wxCheckBox* GetStatusbarShowCol() { return m_statusbarShowCol; }
    wxCheckBox* GetStatusbarShowPos() { return m_statusbarShowPos; }
    wxCheckBox* GetStatusbarShowFileLength() { return m_statusbarShowFileLength; }
    wxCheckBox* GetStatusBarShowSelChars() { return m_statusBarShowSelChars; }
    wxPanel* GetPanel44() { return m_panel44; }
    wxStaticText* GetStaticText94() { return m_staticText94; }
    wxTextCtrl* GetTextCtrlSeparation() { return m_textCtrlSeparation; }
    wxStaticText* GetStaticText97() { return m_staticText97; }
    wxPanel* GetPanelTBar() { return m_panelTBar; }
    wxStaticText* GetStaticText1() { return m_staticText1; }
    wxChoice* GetFileEncoding() { return m_fileEncoding; }
    wxCheckBox* GetSetLocale() { return m_SetLocale; }
    wxStaticText* GetStaticTextLocale() { return m_staticTextLocale; }
    wxChoice* GetAvailableLocales() { return m_AvailableLocales; }
    wxPanel* GetPanel2() { return m_panel2; }
    wxStaticText* GetStaticText2() { return m_staticText2; }
    wxButton* GetClearButton() { return m_clearButton; }
    wxStaticText* GetStaticText3() { return m_staticText3; }
    wxTextCtrl* GetMaxItemsFindReplace() { return m_maxItemsFindReplace; }
    wxStaticText* GetStaticText4() { return m_staticText4; }
    wxTextCtrl* GetSpinCtrlMaxOpenTabs() { return m_spinCtrlMaxOpenTabs; }
    wxStaticText* GetStaticText53() { return m_staticText53; }
    wxButton* GetButtonAnnoyingDialogs() { return m_buttonAnnoyingDialogs; }
    wxPanel* GetPanel3() { return m_panel3; }
    wxStaticText* GetStaticText6() { return m_staticText6; }
    wxChoice* GetChoice4() { return m_choice4; }
    wxButton* GetButtonOpenLog() { return m_buttonOpenLog; }
    wxCheckBox* GetRedirectLogOutput() { return m_redirectLogOutput; }
    wxPanel* GetPanel4() { return m_panel4; }
    wxNotebook* GetNotebook2() { return m_notebook2; }
    EditorSettingsMiscBasePanel(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition,
                                const wxSize& size = wxSize(-1, -1), long style = wxTAB_TRAVERSAL);
    virtual ~EditorSettingsMiscBasePanel();
};

#endif
