
// AudioAnalysisDlg.h : 头文件
//

#pragma once


// CAudioAnalysisDlg 对话框
class CAudioAnalysisDlg : public CDialogEx
{
// 构造
public:
	CAudioAnalysisDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_AUDIOANALYSIS_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnLoadfile();
	afx_msg void OnBnClickedBtnAlalysis();
	// 采样频率
	int m_iSampleFreq;
	// 信号频率
	int m_iSigFreq;
	// 采样点数
	int m_iSamplePoints;
	//wav文件路径
	CString m_strWavPath;
	//文件内容
	unsigned char *m_pBufferWav;
	int m_iBufferLen;
};
