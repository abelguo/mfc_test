#include "my.h"

BOOL CWnd::Create()
{
	printf("CWnd::Create\n");
	return TRUE;
}
BOOL CWnd::CreateEx()
{
	printf("CWnd::CreateEx\n");
	return TRUE;
}
 BOOL CWnd::PreCreateWindow()
{
	printf("CWnd::PreCreateWindow\n");
	return TRUE;
}
 BOOL CFrameWnd::Create()
{
	printf("CFrameWnd::Create\n");
	CreateEx();
	return TRUE;
}
BOOL CFrameWnd::PreCreateWindow()
{
	printf("CFrameWnd::PreCreateWindow\n");
	return TRUE;
}

extern CMyWinApp theApp;
CWinApp *AfxGetApp()
{
	return (CWinApp *)&theApp;
}