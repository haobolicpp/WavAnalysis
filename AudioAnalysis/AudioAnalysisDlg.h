
// AudioAnalysisDlg.h : ͷ�ļ�
//

#pragma once


// CAudioAnalysisDlg �Ի���
class CAudioAnalysisDlg : public CDialogEx
{
// ����
public:
	CAudioAnalysisDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_AUDIOANALYSIS_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnLoadfile();
	afx_msg void OnBnClickedBtnAlalysis();
	// ����Ƶ��
	int m_iSampleFreq;
	// �ź�Ƶ��
	int m_iSigFreq;
	// ��������
	int m_iSamplePoints;
	//wav�ļ�·��
	CString m_strWavPath;
	//�ļ�����
	unsigned char *m_pBufferWav;
	int m_iBufferLen;
};
