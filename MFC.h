#ifndef  MFC_H
#define  MFC_H
#define TRUE  1
#define FALSE  0
#define BOOL   int

class CObject
{
public:
	CObject::CObject(){ printf("Cobject  constructor\n");}
	CObject::~CObject(){ printf("Cobject  destructor\n");}
};
class CCmdTarget:public CObject
{
public:
	CCmdTarget::CCmdTarget(){ printf("ccmdtarget  constructor\n");}
	CCmdTarget::~CCmdTarget(){ printf("ccmdtarget  destructor\n");}
};
class CWinThread:public CCmdTarget
{
public:
	CWinThread::CWinThread(){ printf("CWinThread  constructor\n");}
	CWinThread::~CWinThread(){ printf("CWinThread  destructor\n");}
	virtual BOOL InitInstance()   {printf("CWinThread ::Initinstance\n");return TRUE;}
	virtual BOOL Run() { printf("CWinThread::Run\n"); return TRUE;}
};
class CWnd:public CCmdTarget
{
public:
	CWnd::CWnd(){ printf("CWnd  constructor\n");}
	CWnd::~CWnd(){ printf("CWnd  destructor\n");}
	virtual BOOL Create();
	BOOL CreateEx();
	virtual BOOL PreCreateWindow();
};

class CWinApp:public CWinThread
{
public:
	 CWnd* m_pMainWnd;
     CWinApp *m_pCurrentWinApp;
	

public:
	CWinApp::CWinApp(){ m_pCurrentWinApp=this;}
	CWinApp::~CWinApp(){ printf("CWinApp  destructor\n");}
	virtual BOOL InitApplication()
	{
		printf("CWinApp::InitApplication\n");
		return TRUE;
	}
	virtual BOOL InitInstance()
	{
		printf("CWinApp::InitInstance\n");
		return TRUE;
	}
	virtual int Run()
	{
		printf("CWinApp::Run\n");
		return CWinThread::Run();
	}
};
class CDocument:public CCmdTarget
{
public:
	CDocument::CDocument(){ printf("CDocument  constructor\n");}
	CDocument::~CDocument(){ printf("CDocument  destructor\n");}
};
class CFrameWnd :public CWnd
{
public:
	CFrameWnd::CFrameWnd(){ printf("CFrameWnd  constructor\n");}
	CFrameWnd::~CFrameWnd(){ printf("CFrameWnd  destructor\n");}
	BOOL Create();
	virtual BOOL PreCreateWindow();
};
class CView :public CWnd
{
public:
	CView::CView(){ printf("CView  constructor\n");}
	CView::~CView(){ printf("CView  destructor\n");}
};
//global function
CWinApp *AfxGetApp();

#endif