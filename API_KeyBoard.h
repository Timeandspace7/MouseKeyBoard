#pragma once

#include <stdio.h>
#include <Windows.h>
#include "VirtualKeysStandardSet.h"

void MySetKeyBig();
void KeyBoardDown(int vk);	// @brief	：按下 vk 键
void KeyBoardUp(int vk);	// @brief	：释放 vk 键
void KeyBoardPress(int vk);	// @brief	：按下并释放 vk 键

void Ctrl_C();				// @brief	：模拟 Ctrl + C
void Ctrl_V();				// @brief	：模拟 Ctrl + V