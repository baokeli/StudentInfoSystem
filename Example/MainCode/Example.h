
// Example.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "../resource.h"		// ������


// CExampleApp: 
// �йش����ʵ�֣������ Example.cpp
//

class CExampleApp : public CWinApp
{
public:
	CExampleApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CExampleApp theApp;