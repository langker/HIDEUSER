// HideUser.h : main header file for the HIDEUSER application
//

#if !defined(AFX_HIDEUSER_H__C93B3CA9_72FE_4B68_8F06_C11B02695E19__INCLUDED_)
#define AFX_HIDEUSER_H__C93B3CA9_72FE_4B68_8F06_C11B02695E19__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CHideUserApp:
// See HideUser.cpp for the implementation of this class
//

class CHideUserApp : public CWinApp
{
public:
	CHideUserApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CHideUserApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CHideUserApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HIDEUSER_H__C93B3CA9_72FE_4B68_8F06_C11B02695E19__INCLUDED_)
