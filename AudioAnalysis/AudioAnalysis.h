
// AudioAnalysis.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CAudioAnalysisApp: 
// �йش����ʵ�֣������ AudioAnalysis.cpp
//

class CAudioAnalysisApp : public CWinApp
{
public:
	CAudioAnalysisApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CAudioAnalysisApp theApp;