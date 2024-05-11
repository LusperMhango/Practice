#include <iostream>
using namespace std;
int main()
{

    int *pIntpointer = nullptr;
    int myValue = 5;

    pIntpointer = &myValue;

    int *pIntpointertwo = pIntpointer;
    // comparison operaters and pointers

    if (pIntpointer == nullptr)
    {
        cout << "This is an invalid pointer" << endl;
    }
    else if (pIntpointer != nullptr && pIntpointer == pIntpointertwo)
    {
        cout << " this is a valid pointer " << endl;
        cout << pIntpointertwo << endl;
    }
    return 0;
}
