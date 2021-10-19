#ifndef DLLDEF_H
#define DLLDEF_H

//VS DLL项目的新项目模板会将 ${PROJECTNAME}_EXPORTS 添加到定义预处理器宏 。
//关于dllexport、dllimport，参考：https://docs.microsoft.com/zh-cn/cpp/cpp/dllexport-dllimport?view=msvc-160
#ifdef MYDLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif

//__cdecl 是 C 和 c + + 程序的默认调用约定。
//更多命名约定，参考https://docs.microsoft.com/zh-cn/cpp/cpp/argument-passing-and-naming-conventions?view=msvc-160
#define DLL_CALL __cdecl

#endif //DLLDEF_H
