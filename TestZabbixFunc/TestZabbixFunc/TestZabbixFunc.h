
// TestZabbixFunc.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CTestZabbixFuncApp:
// �йش����ʵ�֣������ TestZabbixFunc.cpp
//

class CTestZabbixFuncApp : public CWinApp
{
public:
	CTestZabbixFuncApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CTestZabbixFuncApp theApp;