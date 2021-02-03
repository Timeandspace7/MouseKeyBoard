/**
******************************************************************************
* @file    API_MouseAction.cpp
* @author  C++ 鼠标模拟程序
* @LinkS   https://blog.csdn.net/weixinhum/article/details/46351881?utm_medium=distribute.pc_relevant.none-task-blog-BlogCommendFromBaidu-3.control&depth_1-utm_source=distribute.pc_relevant.none-task-blog-BlogCommendFromBaidu-3.control
* @version V1.0.0
* @date    13-January-2021
* @place   Xuzhou,JiangSu
* @brief   
******************************************************************************
*/
#include <iostream>
#include "API_MouseAction.h"

using namespace std;

/*********************************************************************
* @fn		：MouseMove
* @brief	：鼠标移动到指定位置
* @param	：int x, int y
* @return	：NULL
**********************************************************************/
void MouseMove(int x, int y)
{
	double fScreenWidth = ::GetSystemMetrics(SM_CXSCREEN) - 1;//获取屏幕分辨率宽度
	double fScreenHeight = ::GetSystemMetrics(SM_CYSCREEN) - 1;//获取屏幕分辨率高度
	double fx = x * (65535.0f / fScreenWidth);
	double fy = y * (65535.0f / fScreenHeight);
	INPUT  Input = { 0 };
	Input.type = INPUT_MOUSE;
	Input.mi.dwFlags = MOUSEEVENTF_MOVE | MOUSEEVENTF_ABSOLUTE;
	Input.mi.dx = fx;
	Input.mi.dy = fy;
	SendInput(1, &Input, sizeof(INPUT));
}

/*********************************************************************
* @fn		：MouseLeftDown
* @brief	：鼠标左键按下
* @param	：NULL
* @return	：NULL
**********************************************************************/
void MouseLeftDown()
{
	INPUT  Input = { 0 };
	Input.type = INPUT_MOUSE;
	Input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
	SendInput(1, &Input, sizeof(INPUT));
}

/*********************************************************************
* @fn		：MouseLeftUp
* @brief	：鼠标左键放开
* @param	：NULL
* @return	：NULL
**********************************************************************/
void MouseLeftUp()
{
	INPUT  Input = { 0 };
	Input.type = INPUT_MOUSE;
	Input.mi.dwFlags = MOUSEEVENTF_LEFTUP;
	SendInput(1, &Input, sizeof(INPUT));

}

/*********************************************************************
* @fn		：MouseRightDown
* @brief	：鼠标右键按下
* @param	：NULL
* @return	：NULL
**********************************************************************/
void MouseRightDown()
{
	INPUT  Input = { 0 };
	Input.type = INPUT_MOUSE;
	Input.mi.dwFlags = MOUSEEVENTF_RIGHTDOWN;
	SendInput(1, &Input, sizeof(INPUT));
}

/*********************************************************************
* @fn		：MouseRightUp
* @brief	：鼠标右键放开
* @param	：NULL
* @return	：NULL
**********************************************************************/
void MouseRightUp()
{
	INPUT  Input = { 0 };
	Input.type = INPUT_MOUSE;
	Input.mi.dwFlags = MOUSEEVENTF_RIGHTUP;
	SendInput(1, &Input, sizeof(INPUT));
}


/*********************************************************************
* @fn		：MouseLeftDoubleClick
* @brief	：鼠标左键双击
* @param	：NULL
* @return	：NULL
**********************************************************************/
void MouseLeftDoubleClick()
{
	int i = 0;
	for (; i < 2; i++) {
		MouseLeftDown();	// @brief	：鼠标左键按下
		//Sleep(10);
		MouseLeftUp();		// @brief	：鼠标左键放开
	}

}

/*********************************************************************
* @fn		：MouseLeftClick
* @brief	：鼠标左键单击
* @param	：NULL
* @return	：NULL
**********************************************************************/
void MouseLeftClick()
{
	MouseLeftDown();	// @brief	：鼠标左键按下
	Sleep(10);
	MouseLeftUp();		// @brief	：鼠标左键放开
}

/*********************************************************************
* @fn		：MouseRightClick
* @brief	：鼠标右键单击
* @param	：NULL
* @return	：NULL
**********************************************************************/
void MouseRightClick()
{
	MouseRightDown();	// @brief	：鼠标右键按下
	Sleep(10);					//Sleep(10);
	MouseRightUp();		// @brief	：鼠标右键放开

}

/*********************************************************************
* @fn		：MouseRightDoubleClick
* @brief	：鼠标右键双击
* @param	：NULL
* @return	：NULL
**********************************************************************/
void MouseRightDoubleClick()
{
	int i = 0;
	for (; i < 2; i++) {
		MouseRightDown();	// @brief	：鼠标右键按下
							//Sleep(10);
		MouseRightUp();		// @brief	：鼠标右键放开
	}

}


/*********************************************************************
* @fn		：SetCursorPosition
* @brief	：交互式输入坐标指定鼠标移动到指定位置
* @param	：int x, int y
* @return	：NULL
**********************************************************************/
void SetCursorPosition()
{
	int PointX = 0;	// 想要鼠标出现的坐标 X
	int PointY = 0;	// 想要鼠标出现的坐标 Y

	cout << "想要鼠标出现的坐标 X：";
	cin >> PointX;
	cout << "想要鼠标出现的坐标 Y：";
	cin >> PointY;

	MouseMove(PointX, PointY);
}
/*********************************************************************
* @fn		：MoveAndLeftClick
* @brief	：交互式输入坐标指定鼠标按下的位置并左键点击
* @param	：NULL
* @return	：NULL
**********************************************************************/
void MoveAndLeftClick()
{
	SetCursorPosition();	// @brief	：鼠标移动到指定位置
	MouseLeftDown();	// @brief	：鼠标左键按下
	MouseLeftUp();		// @brief	：鼠标左键放开
}


/*********************************************************************
* @fn		：MoveAndLeftClick
* @brief	：交互式输入坐标指定鼠标按下的位置并左键双击
* @param	：NULL
* @return	：NULL
**********************************************************************/
void MoveAndLeftDoubleClick()
{
	SetCursorPosition();	// @brief	：鼠标移动到指定位置
	MouseLeftDoubleClick();	// @brief	：鼠标左键双击
}
