#include <iostream>
using namespace std;
int main()
{
    int x;
    const int *p = &x;
    *p = 5;
    return 0;
}