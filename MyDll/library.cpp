//ͷ�ļ�����˳�򣬲ο���https://google-styleguide.readthedocs.io/zh_CN/latest/google-cpp-styleguide/headers.html#include
//�������ѡ����Ԥ����ͷ�ļ��ķ�ʽ��
//ÿһ��.cpp�ļ��ĵ�һ�д���������Ԥ����ͷ�ļ��������������
#include "pch.h"	 // use stdafx.h in Visual Studio 2017 and earlier
#include "library.h"
#include <iostream>

//��VC++�У�����Լ���Ǻ������͵�һ���֣���˺����������Ͷ��崦����Լ��Ҫ��ͬ������ֻ���������е���Լ���������崦û�л���������ͬ��
void DLL_CALL hello() {
	std::cout << "Hello World!\n";
}