#include<stdio.h>
#include"mfc.h"
#ifndef MY_H
#define MY_H

class CMyWinApp :public CWinApp
{
public:
	//CWnd* m_pMainWnd;
	CMyWinApp::CMyWinApp(){printf("CMyWinApp constructor\n");}
	CMyWinApp::~CMyWinApp(){printf("CMyWinApp destructor\n");}
	virtual BOOL InitInstance();
};


class CMyFrameWnd :public CFrameWnd
{
public:
	CMyFrameWnd();
	CMyFrameWnd::~CMyFrameWnd(){printf("CMyFrameWnd destructor\n");}

};

#endif