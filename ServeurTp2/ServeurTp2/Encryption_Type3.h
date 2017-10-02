// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the ENCRYPTION_TYPE3_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// ENCRYPTION_TYPE3_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef ENCRYPTION_TYPE3_EXPORTS
#define ENCRYPTION_TYPE3_API __declspec(dllexport)
#else
#define ENCRYPTION_TYPE3_API __declspec(dllimport)
#endif

#include <string>
using namespace std;

extern "C" ENCRYPTION_TYPE3_API void ChiffrerTrois(int entier, char* buffer);
extern "C" ENCRYPTION_TYPE3_API void DechiffrerTrois(int entier, char* buffer);
