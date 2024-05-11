#include <iostream>
using namespace std;
int main()
{
    float *pExamplePointer = nullptr;
    float examplevariable = 5.9f;
    pExamplePointer = &examplevariable;

    cout << "the size of examplevariable: " << sizeof(examplevariable) << endl;
    cout << "the size of pExamplePointer: " << sizeof(pExamplePointer) << endl;

    return 0;
}