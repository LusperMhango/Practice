#include <iostream>
using namespace std;
int main()
{
    // null pointer
    float *pMypointer = nullptr;
    // declaring first var
    float examplevariable = 2.3f;
    // assign its memory address to pointer
    pMypointer = &examplevariable;

    float anotherVariable = 5.0f;
    pMypointer = &anotherVariable;

    cout << pMypointer << endl;
    return 0;
}