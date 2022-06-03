// helloDll.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "helloDll.h"


// This is an example of an exported variable
HELLODLL_API int nhelloDll=0;

// This is an example of an exported function.
HELLODLL_API int fnhelloDll(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
ChelloDll::ChelloDll()
{
    return;
}
