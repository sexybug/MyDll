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