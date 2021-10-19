//头文件包含顺序，参考：https://google-styleguide.readthedocs.io/zh_CN/latest/google-cpp-styleguide/headers.html#include
//如果工程选用了预编译头文件的方式，
//每一个.cpp文件的第一行代码必须包含预编译头文件，否则会编译出错。
#include "pch.h"	 // use stdafx.h in Visual Studio 2017 and earlier
#include "library.h"
#include <iostream>

void hello() {
	std::cout << "Hello World!\n";
}