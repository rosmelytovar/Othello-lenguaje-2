//---------------------------------------------------------------------------
//
// Name:        othelo App.h
// Author:      Dayana
// Created:     26/05/2017 15:58:39
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __OTHELO_DAYANAFRMApp_h__
#define __OTHELO_DAYANAFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class othelo_dayanaFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
