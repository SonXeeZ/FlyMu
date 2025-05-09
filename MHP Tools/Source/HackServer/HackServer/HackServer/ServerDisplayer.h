// ServerDisplayer.h: interface for the CServerDisplayer class.
//
//////////////////////////////////////////////////////////////////////

#pragma once

#define MAX_LOG_TEXT_LINE 30
#define MAX_LOG_TEXT_SIZE 80

#define BACKCOLOR	RGB(0, 45, 0)

enum eLogColor
{
	LOG_BLACK = 0,
	LOG_RED = 1,
	LOG_GREEN = 2,
	LOG_BLUE = 3,
	LOG_ORANGE = 4,
};

struct LOG_DISPLAY_INFO
{
	char text[MAX_LOG_TEXT_SIZE];
	eLogColor color;
};

class CServerDisplayer
{
public:
	CServerDisplayer();
	virtual ~CServerDisplayer();
	void Init(HWND hWnd);
	void Run();
	void SetWindowName();
	void PaintAllInfo();
	void LogTextPaint();
	void Interface(HWND hWnd);
	void LogAddText(eLogColor color,char* text,int size);
private:
	HWND m_hwnd;
	HFONT m_font;
	HBRUSH m_brush[3];
	LOG_DISPLAY_INFO m_log[MAX_LOG_TEXT_LINE];
	int m_count;
	char m_DisplayerText[2][64];
};

extern CServerDisplayer gServerDisplayer;
