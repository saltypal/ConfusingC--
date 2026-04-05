// this is a header file only for executor functions interface

#ifndef EXECUTOR_H
#define EXECUTOR_H

#include "parser.h"

int executeParsed(const ParsedCMD& cmd);
/*
I am going to the location of where the parsed cmd content is.

*/

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#endif