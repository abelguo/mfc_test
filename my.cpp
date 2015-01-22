#include "my.h"

CMyWinApp theApp;

BOOL CMyWinApp::InitInstance()
{
	printf("CMyWinApp::InitInstance\n");
	m_pMainWnd=new CMyFrameWnd;
	delete(m_pMainWnd);
    return TRUE;
}

CMyFrameWnd::CMyFrameWnd()
{
	printf("CMyFrameWnd::CMyFrameWnd\n");
	Create();
}
int main()
{
	CWinApp *pApp=AfxGetApp();
	pApp->InitApplication();
	pApp->InitInstance();
	pApp->Run();
	return 0;
}