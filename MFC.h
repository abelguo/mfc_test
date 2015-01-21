#include<iostream>
using namespace std;

class CObject
{
public:
	CObject::CObject(){ cout<<"Cobject  constructor\n";}
	CObject::~CObject(){ cout<<"Cobject  destructor\n";}
};
class CCmdTarget:public CObject
{
public:
	CCmdTarget::CCmdTarget(){ cout<<"ccmdtarget  constructor\n";}
	CCmdTarget::~CCmdTarget(){ cout<<"ccmdtarget  destructor\n";}
};
class CWinThread:public CCmdTarget
{
public:
	CWinThread::CWinThread(){ cout<<"CWinThread  constructor\n";}
	CWinThread::~CWinThread(){ cout<<"CWinThread  destructor\n";}
};
class CWinApp:public CWinThread
{
public:
	CWinApp::CWinApp(){ cout<<"CWinApp  constructor\n";}
	CWinApp::~CWinApp(){ cout<<"CWinApp  destructor\n";}
};
class CDocument:public CCmdTarget
{
public:
	CDocument::CDocument(){ cout<<"CDocument  constructor\n";}
	CDocument::~CDocument(){ cout<<"CDocument  destructor\n";}
};
class CWnd:public CCmdTarget
{
public:
	CWnd::CWnd(){ cout<<"CWnd  constructor\n";}
	CWnd::~CWnd(){ cout<<"CWnd  destructor\n";}
};
class CFrameWnd :public CWnd
{
public:
	CFrameWnd::CFrameWnd(){ cout<<"CFrameWnd  constructor\n";}
	CFrameWnd::~CFrameWnd(){ cout<<"CFrameWnd  destructor\n";}
};
class CView :public CWnd
{
public:
	CView::CView(){ cout<<"CView  constructor\n";}
	CView::~CView(){ cout<<"CView  destructor\n";}
};
//global function
CWinApp *AfxGetApp()