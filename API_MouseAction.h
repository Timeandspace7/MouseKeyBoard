#pragma once


#include <windows.h>



void MouseMove(int x, int y);	// @brief	：传参鼠标移动到指定位置
void MouseLeftDown();	// @brief	：鼠标左键按下
void MouseLeftUp();		// @brief	：鼠标左键放开
void MouseRightDown();	// @brief	：鼠标右键按下
void MouseRightUp();	// @brief	：鼠标右键放开
void MouseLeftClick();	// @brief	：鼠标左键单击
void MouseRightClick();	// @brief	：鼠标右键单击
void MouseLeftDoubleClick();	// @brief	：鼠标左键双击
void MouseRightDoubleClick();	// @brief	：鼠标右键双击
void SetCursorPosition();	// @brief	：交互式输入坐标指定鼠标移动到指定位置
void MoveAndLeftClick();	// @brief	：交互式输入坐标指定鼠标按下的位置并左键点击
void MoveAndLeftDoubleClick();	// @brief	：交互式输入坐标指定鼠标按下的位置并左键双击
