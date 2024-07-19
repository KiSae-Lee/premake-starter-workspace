#include "class.h"
#include "spdlog/spdlog.h"

using namespace std;

MyClass::MyClass()
{
    SPDLOG_INFO("I'm constructor!");
}

MyClass::~MyClass()
{
    cout << "I'm destructor!" << endl;
}

void MyClass::print()
{
    cout << "I'm class!" << endl;
}
