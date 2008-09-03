#ifndef __virtualdirectoryselector__
#define __virtualdirectoryselector__

/**
@file
Subclass of VirtualDirectorySelectorBase, which is generated by wxFormBuilder.
*/

#include "virtualdirectoryselectorbase.h"
class Workspace;

/** Implementing VirtualDirectorySelectorBase */
class VirtualDirectorySelector : public VirtualDirectorySelectorBase
{
	Workspace *m_workspace;
	
protected:
	wxString DoGetPath(const wxTreeItemId &item);
	void DoBuildTree();
	
protected:
	// Handlers for VirtualDirectorySelectorBase events.
	void OnItemSelected( wxTreeEvent& event );
	void OnButtonOK( wxCommandEvent& event );
	void OnButtonCancel( wxCommandEvent& event );
	void OnButtonOkUI(wxUpdateUIEvent &event);
	
public:
	/** Constructor */
	VirtualDirectorySelector( wxWindow* parent, Workspace *wsp );
	wxString GetVirtualDirectoryPath() const {return m_staticTextPreview->GetLabel();}
};

#endif // __virtualdirectoryselector__
