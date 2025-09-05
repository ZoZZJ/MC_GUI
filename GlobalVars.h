#ifndef GLOBALVARS_H
#define GLOBALVARS_H

#include "MultiCardCPP.h"  // 控制卡类的头文件
#include <QString>

// 使用 inline 关键字在头文件中直接定义并初始化全局变量
inline MultiCard g_MultiCard;  // 控制卡全局对象（默认构造）

// 带初始值的全局变量
inline int g_CurrentAxisNum = 1;  // 当前选中轴号，默认1
inline QString g_DeviceName = "PCI8511B";  // 设备名，默认"PCI8511B"

// 全局常量（const 变量在头文件中初始化无需 inline，天然支持多文件包含）
const int g_MaxAxisCount = 4;  // 最大轴数，固定为4

#endif // GLOBALVARS_H
