#include <iostream>
using namespace std;

int main()
{
    int fixedArrayofIntegers[3];
    int *dynamicListOfIntegers = new int[3];

    dynamicListOfIntegers[0] = 5;
    dynamicListOfIntegers[1] = -12;
    dynamicListOfIntegers[2] = 8;

    cout << "element[1]: " << dynamicListOfIntegers[1] << endl;
    cout << "size of fixedArrayIntegers: " << sizeof(fixedArrayofIntegers) << endl;
    cout << " size of dynamicListOfIntegers: " << sizeof(dynamicListOfIntegers);
}