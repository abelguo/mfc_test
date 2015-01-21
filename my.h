#include <iostream>
#include "mfc.h"

using namespace std;

class CMyWinApp :public CWinApp
{
public:
	CMyWinApp::CMyWinApp(){cout<<"CMyWinApp constructor\n";}
	CMyWinApp::~CMyWinApp(){cout<<"CMyWinApp destructor\n";}
};
class CMyFrameWnd :public CFrameWnd
{
public:
	CMyFrameWnd::CMyFrameWnd(){cout<<"CMyFrameWnd constructor\n";}
	CMyFrameWnd::~CMyFrameWnd(){cout<<"CMyFrameWnd destructor\n";}
};
