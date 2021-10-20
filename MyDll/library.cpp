//头文件包含顺序，参考：https://google-styleguide.readthedocs.io/zh_CN/latest/google-cpp-styleguide/headers.html#include
//如果工程选用了预编译头文件的方式，
//每一个.cpp文件的第一行代码必须包含预编译头文件，否则会编译出错。
#include "pch.h"	 // use stdafx.h in Visual Studio 2017 and earlier
#include "library.h"
#include <iostream>

//在VC++中，调用约定是函数类型的一部分，因此函数的声明和定义处调用约定要相同，不能只在声明处有调用约定，而定义处没有或与声明不同。
void DLL_CALL hello() {
	std::cout << "Hello World!\n";
}