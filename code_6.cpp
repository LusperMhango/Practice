#include <iostream>
using namespace std;

int main()
{
    // creating an array of size 4 and initialising it
    int integerArray[4] = {2, 3, 4, 5};

    cout << " the value is: " << integerArray << endl;
    cout << "the value is: " << &integerArray << endl;
    cout << "the value is: " << *integerArray << endl;
    cout << " the value is: " << integerArray + 2 << endl;
    cout << "the value is: " << *(integerArray + 2) << endl;

    // another example
    int elementArray[5] = {2, 5, 10, 12, 14};

    cout << " value of an array before change: " << elementArray[0] << endl;
    *elementArray = 20;
    cout << " value of an array after change: " << elementArray[0] << endl;
    cout << " value of an array before change: " << elementArray[2] << endl;
    *(elementArray + 2) = 40;
    cout << " value of an array after change: " << elementArray[2] << endl;
    elementArray + 3;
    cout << "the size of: " << elementArray + 3 << endl;
    return 0;
}
