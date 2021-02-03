/**
******************************************************************************
* @file    API_KeyBoard.cpp
* @author  C++ 模拟键盘按键
* @LinkS   https://blog.csdn.net/qq_40757240/article/details/105504524
* @version V1.0.0
* @date    27-January-2021
* @place   Xuzhou,JiangSu
* @brief
******************************************************************************
*/
#include <iostream>
#include "API_KeyBoard.h"

using namespace std;

/*


*/
/*********************************************************************
* @fn		：MyAnalogKey
* @brief	：设置键盘大小写状态
* @param	：BOOL big
			  big:为TRUE则切换大写状态,否则切换小写状态
* @return	：NULL
**********************************************************************/
void MySetKeyBig()
{
	//GetKeyState(VK_CAPITAL);
	//keybd_event(VK_CAPITAL, NULL, KEYEVENTF_EXTENDEDKEY | 0, NULL);
	//GetAsyncKeyState(VK_SPACE);
	do{
			cout << "空格键未被按下" << endl;
			Sleep(20);//循环时间间隔，防止太占内存 
			system("cls");//清屏 
	}while (!GetKeyState(VK_1));
	//while (!GetKeyState(VK_SPACE))

}


/*********************************************************************
* @fn		：KeyBoardDown
* @brief	：按下 vk 键
* @param	：int vk
* @return	：NULL
**********************************************************************/
void KeyBoardDown(int vk)
{
	keybd_event(vk, 0, 0, 0);
}

/*********************************************************************
* @fn		：KeyBoardDown
* @brief	：释放 vk 键
* @param	：int vk
* @return	：NULL
**********************************************************************/
void KeyBoardUp(int vk)
{
	keybd_event(vk, 0, KEYEVENTF_KEYUP, 0);
}

/*********************************************************************
* @fn		：KeyBoardPress
* @brief	：按下并释放 vk 键
* @param	：int vk
* @return	：NULL
**********************************************************************/
void KeyBoardPress(int vk)
{
	KeyBoardDown(vk);
	KeyBoardUp(vk);
}

/*********************************************************************
* @fn		：Ctrl_C
* @brief	：模拟 Ctrl + C
* @param	：NULL
* @return	：NULL
**********************************************************************/
void Ctrl_C()
{
	KeyBoardDown(VK_CONTROL);	//按下 Ctrl 键
	KeyBoardPress(VK_C);		//按下 C 键，并放开
	KeyBoardUp(VK_CONTROL);		//放开 Ctrl 键

}

/*********************************************************************
* @fn		：Ctrl_V
* @brief	：模拟 Ctrl + V
* @param	：NULL
* @return	：NULL
**********************************************************************/
void Ctrl_V()
{
	KeyBoardDown(VK_CONTROL);	//按下 Ctrl 键
	KeyBoardPress(VK_V);		//按下 V 键，并放开
	KeyBoardUp(VK_CONTROL);		//放开 Ctrl 键
}

