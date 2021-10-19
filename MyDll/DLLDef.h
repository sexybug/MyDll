#ifndef DLLDEF_H
#define DLLDEF_H

//VS DLL��Ŀ������Ŀģ��Ὣ ${PROJECTNAME}_EXPORTS ��ӵ�����Ԥ�������� ��
//����dllexport��dllimport���ο���https://docs.microsoft.com/zh-cn/cpp/cpp/dllexport-dllimport?view=msvc-160
#ifdef MYDLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif

//__cdecl �� C �� c + + �����Ĭ�ϵ���Լ����
//��������Լ�����ο�https://docs.microsoft.com/zh-cn/cpp/cpp/argument-passing-and-naming-conventions?view=msvc-160
#define DLL_CALL __cdecl

#endif //DLLDEF_H
