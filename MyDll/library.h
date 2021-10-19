#pragma once	//此句用来消除如下IntelliSense警告：
				//C++ PCH 警告: 头停止点不能位于宏或 #if 块中。未生成 IntelliSense PCH 文件。

#ifndef LIBRARY_H
#define LIBRARY_H

#include "DLLDef.h"

#ifdef __cplusplus    // If used by C++ code, 
extern "C" {          // we need to export the C interface
#endif

DLL_API void DLL_CALL hello();

#ifdef __cplusplus
}
#endif

#endif //LIBRARY_H