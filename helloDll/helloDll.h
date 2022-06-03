// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the HELLODLL_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// HELLODLL_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef HELLODLL_EXPORTS
#define HELLODLL_API __declspec(dllexport)
#else
#define HELLODLL_API __declspec(dllimport)
#endif

// This class is exported from the dll
class HELLODLL_API ChelloDll {
public:
	ChelloDll(void);
	// TODO: add your methods here.
};

extern HELLODLL_API int nhelloDll;

HELLODLL_API int fnhelloDll(void);
