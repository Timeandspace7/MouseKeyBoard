#pragma once

// 键盘VK键值列表
/* Virtual Keys, Standard Set*/
#define VK_LBUTTON        0x01    // 鼠标左键
#define VK_RBUTTON        0x02    // 鼠标右键 
#define VK_CANCEL         0x03    // Ctrl + Break
#define VK_MBUTTON        0x04    // 鼠标中键/* NOT contiguous with L & RBUTTON */
#define VK_BACK           0x08    // Backspace 键
#define VK_TAB            0x09    // Tab 键
#define VK_CLEAR          0x0C    // Clear键	
#define VK_RETURN         0x0D    // 回车键
#define VK_SHIFT          0x10    // Shift键
#define VK_CONTROL        0x11    // Ctrl键
#define VK_MENU           0x12    // Alt 键
#define VK_PAUSE          0x13    // Pause键
#define VK_CAPITAL        0x14    // Caps Lock 键 
#define VK_ESCAPE         0x1B    // Esc 键
#define VK_SPACE          0x20    // 空格
#define VK_PRIOR          0x21    // Page Up 键
#define VK_NEXT           0x22    // Page Down 键
#define VK_END            0x23    // End 键
#define VK_HOME           0x24    // Home 键
 // 方向键  
#define VK_LEFT           0x25    // ←键
#define VK_UP             0x26    // ↑键
#define VK_RIGHT          0x27    // →键
#define VK_DOWN           0x28    // ↓键
#define VK_SELECT         0x29    // Select键
#define VK_PRINT          0x2A    // Print键
#define VK_EXECUTE        0x2B    // Execute键
#define VK_SNAPSHOT       0x2C    // Print Screen 键
#define VK_INSERT         0x2D    // Insert键
#define VK_DELETE         0x2E    // Delete键
#define VK_HELP           0x2F    // Help键

 /* VK_0 thru VK_9 are the same as ASCII '0' thru '9' (0x30 - 0x39) */
#define VK_0			  0x30	  // 0键
#define VK_1			  0x31	  // 1键
#define VK_2			  0x32	  // 2键
#define VK_3			  0x33	  // 3键
#define VK_4			  0x34	  // 4键
#define VK_5			  0x35	  // 5键
#define VK_6			  0x36	  // 6键
#define VK_7			  0x37	  // 7键
#define VK_8			  0x38	  // 8键
#define VK_9			  0x39	  // 9键

 /* VK_A thru VK_Z are the same as ASCII 'A' thru 'Z' (0x41 - 0x5A) */
#define VK_A			  0x41	  // A键
#define VK_B			  0x42	  // B键
#define VK_C			  0x43	  // C键
#define VK_D			  0x44	  // D键
#define VK_E			  0x45	  // E键
#define VK_F			  0x46	  // F键
#define VK_G			  0x47	  // G键
#define VK_H			  0x48	  // H键
#define VK_I			  0x49	  // I键
#define VK_J			  0x4A	  // J键
#define VK_K			  0x4B	  // K键
#define VK_L			  0x4C	  // L键
#define VK_M			  0x4D	  // M键
#define VK_N			  0x4E	  // N键
#define VK_O			  0x4F	  // O键
#define VK_P			  0x50	  // P键
#define VK_Q			  0x51	  // Q键
#define VK_R			  0x52	  // R键
#define VK_S			  0x53	  // S键
#define VK_T			  0x54	  // T键
#define VK_U			  0x55	  // U键
#define VK_V			  0x56	  // V键
#define VK_W			  0x57	  // W键
#define VK_X			  0x58	  // X键
#define VK_Y			  0x59	  // Y键
#define VK_Z			  0x5A	  // Z键

#define VK_LWIN           0x5B	  // 左WinKey(104键盘才有) 
#define VK_RWIN           0x5C	  // 右WinKey(104键盘才有)
#define VK_APPS           0x5D	  // AppsKey(104键盘才有) 
#define VK_SLEEP          0x5F	  // 休眠键

 //小键盘0-9
#define VK_NUMPAD0        0x60 	  // 小数字键盘0键
#define VK_NUMPAD1        0x61	  // 小数字键盘1键
#define VK_NUMPAD2        0x62	  // 小数字键盘2键
#define VK_NUMPAD3        0x63	  // 小数字键盘3键
#define VK_NUMPAD4        0x64	  // 小数字键盘4键
#define VK_NUMPAD5        0x65	  // 小数字键盘5键
#define VK_NUMPAD6        0x66	  // 小数字键盘6键
#define VK_NUMPAD7        0x67	  // 小数字键盘7键
#define VK_NUMPAD8        0x68	  // 小数字键盘8键
#define VK_NUMPAD9        0x69	  // 小数字键盘9键

#define VK_MULTIPLY       0x6A	  // 乘号键
#define VK_ADD            0x6B	  // 加号键
#define VK_SEPARATOR      0x6C	  // 分割键
#define VK_SUBTRACT       0x6D	  // 减号键
#define VK_DECIMAL        0x6E	  // 小数点键
#define VK_DIVIDE         0x6F	  // 除号键

#define VK_F1             0x70	  // F1键
#define VK_F2             0x71	  // F2键
#define VK_F3             0x72	  // F3键
#define VK_F4             0x73	  // F4键
#define VK_F5             0x74	  // F5键
#define VK_F6             0x75	  // F6键
#define VK_F7             0x76	  // F7键
#define VK_F8             0x77	  // F8键
#define VK_F9             0x78	  // F9键
#define VK_F10            0x79	  // F10键
#define VK_F11            0x7A	  // F11键
#define VK_F12            0x7B	  // F12键
#define VK_F13            0x7C	  // F13键
#define VK_F14            0x7D	  // F14键
#define VK_F15            0x7E	  // F15键
#define VK_F16            0x7F	  // F16键
#define VK_F17            0x80	  // F17键
#define VK_F18            0x81	  // F18键
#define VK_F19            0x82	  // F19键
#define VK_F20            0x83	  // F20键
#define VK_F21            0x84	  // F21键
#define VK_F22            0x85	  // F22键
#define VK_F23            0x86	  // F23键
#define VK_F24            0x87	  // F24键

#define VK_NUMLOCK        0x90	  // Num Lock 键
#define VK_SCROLL         0x91    // Scroll Lock 键
/*
* VK_L* & VK_R* - left and right Alt, Ctrl and Shift virtual keys.
* Used only as parameters to GetAsyncKeyState() and GetKeyState().
* No other API or message will distinguish left and right keys in this way.
*/
#define VK_LSHIFT          0xA0	  // 左Shift键
#define VK_RSHIFT          0xA1	  // 右Shift键
#define VK_LCONTROL        0xA2	  // 左Ctrl键
#define VK_RCONTROL        0xA3	  // 右Ctrl键
#define VK_LMENU           0xA4	  // 左Alt键
#define VK_RMENU           0xA5	  // 右Alt键

#if(WINVER >= 0x0400)
#define VK_PROCESSKEY      0xE5
#endif /* WINVER >= 0x0400 */
#define VK_ATTN            0xF6
#define VK_CRSEL           0xF7
#define VK_EXSEL           0xF8
#define VK_EREOF           0xF9
#define VK_PLAY            0xFA
#define VK_ZOOM            0xFB
#define VK_NONAME          0xFC
#define VK_PA1             0xFD
#define VK_OEM_CLEAR       0xFE
