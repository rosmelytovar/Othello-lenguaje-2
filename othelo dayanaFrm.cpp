///-----------------------------------------------------------------
///
/// @file      othelo dayanaFrm.cpp
/// @author    PerozoToyo
/// Created:   26/05/2017 15:58:39
/// @section   DESCRIPTION
///            othelo_dayanaFrm class implementation
///
///------------------------------------------------------------------

#include "othelo dayanaFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// othelo_dayanaFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(othelo_dayanaFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(othelo_dayanaFrm::OnClose)
	EVT_BUTTON(ID_WXBUTTON64,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON63,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON62,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON61,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON60,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON59,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON58,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON57,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON56,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON55,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON54,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON53,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON52,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON51,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON50,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON49,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON48,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON47,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON46,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON45,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON44,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON43,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON42,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON41,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON40,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON39,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON38,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON37,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON36,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON35,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON34,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON33,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON32,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON31,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON30,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON29,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON28,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON27,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON26,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON25,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON24,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON23,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON22,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON21,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON20,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON19,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON18,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON17,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON16,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON15,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON14,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON13,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON12,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON11,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON10,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON9,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON8,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON7,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON6,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON5,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON4,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON3,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON2,othelo_dayanaFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON1,othelo_dayanaFrm::WxButton1Click)
END_EVENT_TABLE()
////Event Table End

othelo_dayanaFrm::othelo_dayanaFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

othelo_dayanaFrm::~othelo_dayanaFrm()
{
}

void othelo_dayanaFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxGridSizer1 = new wxGridSizer(0, 8, 0, 0);
	this->SetSizer(WxGridSizer1);
	this->SetAutoLayout(true);

	WxButton1 = new wxButton(this, ID_WXBUTTON1, _(""), wxPoint(5, 5), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton1"));
	WxButton1->Enable(false);
	WxButton1->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton1, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton2 = new wxButton(this, ID_WXBUTTON2, _(""), wxPoint(63, 5), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton2"));
	WxButton2->Enable(false);
	WxButton2->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton2, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton3 = new wxButton(this, ID_WXBUTTON3, _(""), wxPoint(121, 5), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton3"));
	WxButton3->Enable(false);
	WxButton3->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton3, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton4 = new wxButton(this, ID_WXBUTTON4, _(""), wxPoint(179, 5), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton4"));
	WxButton4->Enable(false);
	WxButton4->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton4, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton5 = new wxButton(this, ID_WXBUTTON5, _(""), wxPoint(237, 5), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton5"));
	WxButton5->Enable(false);
	WxButton5->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton5, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton6 = new wxButton(this, ID_WXBUTTON6, _(""), wxPoint(295, 5), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton6"));
	WxButton6->Enable(false);
	WxButton6->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton6, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton7 = new wxButton(this, ID_WXBUTTON7, _(""), wxPoint(353, 5), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton7"));
	WxButton7->Enable(false);
	WxButton7->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton7, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton8 = new wxButton(this, ID_WXBUTTON8, _(""), wxPoint(411, 5), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton8"));
	WxButton8->Enable(false);
	WxButton8->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton8, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton9 = new wxButton(this, ID_WXBUTTON9, _(""), wxPoint(5, 57), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton9"));
	WxButton9->Enable(false);
	WxButton9->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton9, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton10 = new wxButton(this, ID_WXBUTTON10, _(""), wxPoint(63, 57), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton10"));
	WxButton10->Enable(false);
	WxButton10->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton10, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton11 = new wxButton(this, ID_WXBUTTON11, _(""), wxPoint(121, 57), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton11"));
	WxButton11->Enable(false);
	WxButton11->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton11, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton12 = new wxButton(this, ID_WXBUTTON12, _(""), wxPoint(179, 57), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton12"));
	WxButton12->Enable(false);
	WxButton12->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton12, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton13 = new wxButton(this, ID_WXBUTTON13, _(""), wxPoint(237, 57), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton13"));
	WxButton13->Enable(false);
	WxButton13->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton13, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton14 = new wxButton(this, ID_WXBUTTON14, _(""), wxPoint(295, 57), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton14"));
	WxButton14->Enable(false);
	WxButton14->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton14, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton15 = new wxButton(this, ID_WXBUTTON15, _(""), wxPoint(353, 57), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton15"));
	WxButton15->Enable(false);
	WxButton15->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton15, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton16 = new wxButton(this, ID_WXBUTTON16, _(""), wxPoint(411, 57), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton16"));
	WxButton16->Enable(false);
	WxButton16->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton16, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton17 = new wxButton(this, ID_WXBUTTON17, _(""), wxPoint(5, 109), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton17"));
	WxButton17->Enable(false);
	WxButton17->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton17, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton18 = new wxButton(this, ID_WXBUTTON18, _(""), wxPoint(63, 109), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton18"));
	WxButton18->Enable(false);
	WxButton18->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton18, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton19 = new wxButton(this, ID_WXBUTTON19, _(""), wxPoint(121, 109), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton19"));
	WxButton19->Enable(false);
	WxButton19->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton19, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton20 = new wxButton(this, ID_WXBUTTON20, _(""), wxPoint(179, 109), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton20"));
	WxButton20->Enable(false);
	WxButton20->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton20, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton21 = new wxButton(this, ID_WXBUTTON21, _(""), wxPoint(237, 109), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton21"));
	WxButton21->Enable(false);
	WxButton21->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton21, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton22 = new wxButton(this, ID_WXBUTTON22, _(""), wxPoint(295, 109), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton22"));
	WxButton22->Enable(false);
	WxButton22->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton22, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton23 = new wxButton(this, ID_WXBUTTON23, _(""), wxPoint(353, 109), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton23"));
	WxButton23->Enable(false);
	WxButton23->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton23, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton24 = new wxButton(this, ID_WXBUTTON24, _(""), wxPoint(411, 109), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton24"));
	WxButton24->Enable(false);
	WxButton24->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton24, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton25 = new wxButton(this, ID_WXBUTTON25, _(""), wxPoint(5, 161), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton25"));
	WxButton25->Enable(false);
	WxButton25->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton25, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton26 = new wxButton(this, ID_WXBUTTON26, _(""), wxPoint(63, 161), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton26"));
	WxButton26->Enable(false);
	WxButton26->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton26, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton27 = new wxButton(this, ID_WXBUTTON27, _(""), wxPoint(121, 161), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton27"));
	WxButton27->Enable(false);
	WxButton27->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton27, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton28 = new wxButton(this, ID_WXBUTTON28, _(""), wxPoint(179, 161), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton28"));
	WxButton28->Enable(false);
	WxButton28->SetBackgroundColour(wxColour(_("WHITE")));
	WxGridSizer1->Add(WxButton28, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton29 = new wxButton(this, ID_WXBUTTON29, _(""), wxPoint(237, 161), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton29"));
	WxButton29->Enable(false);
	WxButton29->SetBackgroundColour(wxColour(_("BLACK")));
	WxGridSizer1->Add(WxButton29, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton30 = new wxButton(this, ID_WXBUTTON30, _(""), wxPoint(295, 161), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton30"));
	WxButton30->Enable(false);
	WxButton30->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton30, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton31 = new wxButton(this, ID_WXBUTTON31, _(""), wxPoint(353, 161), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton31"));
	WxButton31->Enable(false);
	WxButton31->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton31, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton32 = new wxButton(this, ID_WXBUTTON32, _(""), wxPoint(411, 161), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton32"));
	WxButton32->Enable(false);
	WxButton32->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton32, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton33 = new wxButton(this, ID_WXBUTTON33, _(""), wxPoint(5, 213), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton33"));
	WxButton33->Enable(false);
	WxButton33->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton33, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton34 = new wxButton(this, ID_WXBUTTON34, _(""), wxPoint(63, 213), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton34"));
	WxButton34->Enable(false);
	WxButton34->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton34, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton35 = new wxButton(this, ID_WXBUTTON35, _(""), wxPoint(121, 213), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton35"));
	WxButton35->Enable(false);
	WxButton35->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton35, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton36 = new wxButton(this, ID_WXBUTTON36, _(""), wxPoint(179, 213), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton36"));
	WxButton36->Enable(false);
	WxButton36->SetBackgroundColour(wxColour(_("BLACK")));
	WxGridSizer1->Add(WxButton36, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton37 = new wxButton(this, ID_WXBUTTON37, _(""), wxPoint(237, 213), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton37"));
	WxButton37->Enable(false);
	WxButton37->SetBackgroundColour(wxColour(_("WHITE")));
	WxGridSizer1->Add(WxButton37, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton38 = new wxButton(this, ID_WXBUTTON38, _(""), wxPoint(295, 213), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton38"));
	WxButton38->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton38, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton39 = new wxButton(this, ID_WXBUTTON39, _(""), wxPoint(353, 213), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton39"));
	WxButton39->Enable(false);
	WxButton39->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton39, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton40 = new wxButton(this, ID_WXBUTTON40, _(""), wxPoint(411, 213), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton40"));
	WxButton40->Enable(false);
	WxButton40->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton40, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton41 = new wxButton(this, ID_WXBUTTON41, _(""), wxPoint(5, 265), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton41"));
	WxButton41->Enable(false);
	WxButton41->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton41, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton42 = new wxButton(this, ID_WXBUTTON42, _(""), wxPoint(63, 265), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton42"));
	WxButton42->Enable(false);
	WxButton42->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton42, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton43 = new wxButton(this, ID_WXBUTTON43, _(""), wxPoint(121, 265), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton43"));
	WxButton43->Enable(false);
	WxButton43->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton43, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton44 = new wxButton(this, ID_WXBUTTON44, _(""), wxPoint(179, 265), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton44"));
	WxButton44->Enable(false);
	WxButton44->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton44, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton45 = new wxButton(this, ID_WXBUTTON45, _(""), wxPoint(237, 265), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton45"));
	WxButton45->Enable(false);
	WxButton45->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton45, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton46 = new wxButton(this, ID_WXBUTTON46, _(""), wxPoint(295, 265), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton46"));
	WxButton46->Enable(false);
	WxButton46->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton46, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton47 = new wxButton(this, ID_WXBUTTON47, _(""), wxPoint(353, 265), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton47"));
	WxButton47->Enable(false);
	WxButton47->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton47, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton48 = new wxButton(this, ID_WXBUTTON48, _(""), wxPoint(411, 265), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton48"));
	WxButton48->Enable(false);
	WxButton48->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton48, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton49 = new wxButton(this, ID_WXBUTTON49, _(""), wxPoint(5, 317), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton49"));
	WxButton49->Enable(false);
	WxButton49->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton49, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton50 = new wxButton(this, ID_WXBUTTON50, _(""), wxPoint(63, 317), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton50"));
	WxButton50->Enable(false);
	WxButton50->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton50, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton51 = new wxButton(this, ID_WXBUTTON51, _(""), wxPoint(121, 317), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton51"));
	WxButton51->Enable(false);
	WxButton51->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton51, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton52 = new wxButton(this, ID_WXBUTTON52, _(""), wxPoint(179, 317), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton52"));
	WxButton52->Enable(false);
	WxButton52->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton52, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton53 = new wxButton(this, ID_WXBUTTON53, _(""), wxPoint(237, 317), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton53"));
	WxButton53->Enable(false);
	WxButton53->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton53, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton54 = new wxButton(this, ID_WXBUTTON54, _(""), wxPoint(295, 317), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton54"));
	WxButton54->Enable(false);
	WxButton54->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton54, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton55 = new wxButton(this, ID_WXBUTTON55, _(""), wxPoint(353, 317), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton55"));
	WxButton55->Enable(false);
	WxButton55->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton55, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton56 = new wxButton(this, ID_WXBUTTON56, _(""), wxPoint(411, 317), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton56"));
	WxButton56->Enable(false);
	WxButton56->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton56, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton57 = new wxButton(this, ID_WXBUTTON57, _(""), wxPoint(5, 369), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton57"));
	WxButton57->Enable(false);
	WxButton57->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton57, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton58 = new wxButton(this, ID_WXBUTTON58, _(""), wxPoint(63, 369), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton58"));
	WxButton58->Enable(false);
	WxButton58->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton58, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton59 = new wxButton(this, ID_WXBUTTON59, _(""), wxPoint(121, 369), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton59"));
	WxButton59->Enable(false);
	WxButton59->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton59, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton60 = new wxButton(this, ID_WXBUTTON60, _(""), wxPoint(179, 369), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton60"));
	WxButton60->Enable(false);
	WxButton60->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton60, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton61 = new wxButton(this, ID_WXBUTTON61, _(""), wxPoint(237, 369), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton61"));
	WxButton61->Enable(false);
	WxButton61->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton61, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton62 = new wxButton(this, ID_WXBUTTON62, _(""), wxPoint(295, 369), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton62"));
	WxButton62->Enable(false);
	WxButton62->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton62, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton63 = new wxButton(this, ID_WXBUTTON63, _(""), wxPoint(353, 369), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton63"));
	WxButton63->Enable(false);
	WxButton63->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton63, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton64 = new wxButton(this, ID_WXBUTTON64, _(""), wxPoint(411, 369), wxSize(48, 42), 0, wxDefaultValidator, _("WxButton64"));
	WxButton64->Enable(false);
	WxButton64->SetBackgroundColour(wxColour(128,255,255));
	WxGridSizer1->Add(WxButton64, 0, wxALIGN_CENTER | wxALL, 5);

	SetTitle(_("othelo dayana"));
	SetIcon(wxNullIcon);
	
	Layout();
	GetSizer()->Fit(this);
	GetSizer()->SetSizeHints(this);
	Center();
	
	////GUI Items Creation End
	turno=0;
}

void othelo_dayanaFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * WxButton1Click
 */
void othelo_dayanaFrm::WxButton1Click(wxCommandEvent& event)
{
	// insert your code here
	wxButton*boton= (wxButton*)event.GetEventObject();
	if(boton==WxButton38 && turno==0){
        boton->SetBackgroundColour("BLACK");
	    WxButton37->SetBackgroundColour("BLACK");
	    WxButton38->Enable(false);
	    WxButton30->Enable(true);
	    turno=1;
    }
    
    if(boton==WxButton30 && turno==1){
        boton->SetBackgroundColour("WHITE");
	    WxButton29->SetBackgroundColour("WHITE");
	    WxButton30->Enable(false);
        WxButton20->Enable(true);
	    turno=0;
    }
    
    
    if(boton==WxButton20 && turno==0){
        boton->SetBackgroundColour("BLACK");
	    WxButton28->SetBackgroundColour("BLACK");
	    WxButton29->SetBackgroundColour("BLACK");
	    boton->Enable(false);
	    WxButton27->Enable(true);
	    turno=1;
    }
    
    if(boton==WxButton27 && turno==1){
        boton->SetBackgroundColour("WHITE");
	    WxButton28->SetBackgroundColour("WHITE");
	    WxButton29->SetBackgroundColour("WHITE");
	    boton->Enable(false);
	    WxButton22->Enable(true);
        turno=0;
    }
    
    if(boton==WxButton22 && turno==0){
        boton->SetBackgroundColour("BLACK");
	    WxButton29->SetBackgroundColour("BLACK");
	    WxButton30->SetBackgroundColour("BLACK");
        boton->Enable(false);
	    WxButton45->Enable(true);
	    turno=1;
    }
    
    if(boton==WxButton45 && turno==1){
        boton->SetBackgroundColour("WHITE");
        WxButton36->SetBackgroundColour("WHITE");
        boton->Enable(false);
        WxButton26->Enable(true);
	    turno=0;
    }
    
    if(boton==WxButton26 && turno==0){
        boton->SetBackgroundColour("BLACK");
        WxButton27->SetBackgroundColour("BLACK");
        WxButton28->SetBackgroundColour("BLACK");
        boton->Enable(false);
        WxButton12->Enable(true);
	    turno=1;
    }
    
    if(boton==WxButton12 && turno==1){
        boton->SetBackgroundColour("WHITE");
        WxButton20->SetBackgroundColour("WHITE");
        WxButton28->SetBackgroundColour("WHITE");
        boton->Enable(false);
        WxButton35->Enable(true);
	    turno=0;
    }
    
    if(boton==WxButton35 && turno==0){
        boton->SetBackgroundColour("BLACK");
        WxButton36->SetBackgroundColour("BLACK");
        boton->Enable(false);
	    turno=1;
    }
    
    
    
}
