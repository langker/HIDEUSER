// HideUserDlg.h : header file
//

#if !defined(AFX_HIDEUSERDLG_H__DD9FB4B0_1A99_4C68_8242_0157A187CD2E__INCLUDED_)
#define AFX_HIDEUSERDLG_H__DD9FB4B0_1A99_4C68_8242_0157A187CD2E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CHideUserDlg dialog

class CHideUserDlg : public CDialog
{
// Construction
public:
	void GetFileNameByFilePath(CString filepath);
	CHideUserDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CHideUserDlg)
	enum { IDD = IDD_HIDEUSER_DIALOG };
	CString	m_UserName;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CHideUserDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CHideUserDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HIDEUSERDLG_H__DD9FB4B0_1A99_4C68_8242_0157A187CD2E__INCLUDED_)
