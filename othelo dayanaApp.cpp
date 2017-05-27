//---------------------------------------------------------------------------
//
// Name:        othelo dayanaApp.cpp
// Author:      PerozoToyo
// Created:     26/05/2017 15:58:39
// Description: 
//
//---------------------------------------------------------------------------

#include "othelo dayanaApp.h"
#include "othelo dayanaFrm.h"

IMPLEMENT_APP(othelo_dayanaFrmApp)

bool othelo_dayanaFrmApp::OnInit()
{
    othelo_dayanaFrm* frame = new othelo_dayanaFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int othelo_dayanaFrmApp::OnExit()
{
	return 0;
}
