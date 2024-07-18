#include "class.h"

using namespace std;

MyClass::MyClass()
{
    cout << "I'm constructor!" << endl;
}

MyClass::~MyClass()
{
    cout << "I'm destructor!" << endl;
}

void MyClass::print()
{
    cout << "I'm class!" << endl;
}
