#include <iostream>
#include "library.h"

using namespace std;

int main()
{
    Library::Log::Initialize();

    TRACE("Hello, World!");

    return 0;
}