#include "my.h"
#include "mfc.h"

extern CMyWinApp theApp;
CWinApp *AfxGetApp()
{
	return &theApp;
}