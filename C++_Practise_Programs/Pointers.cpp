#include <iostream>
using namespace std;

int changeByPointerRef(int *ptr)
{
    *ptr += 1;
}

int changeByAliasRef(int &a)
{
    a += 1;
}

int main()
{
    int a = 100;
    int *ptr = &a;
    int **parentPtr = &ptr;

    cout << a << endl;             // 100
    cout << ptr << endl;           // 0x61ff0c
    cout << *(ptr) << endl;        // 100
    cout << parentPtr << endl;     // 0x61ff08
    cout << **(parentPtr) << endl; // 100

    // Pass by pointer reference
    int b = 9;
    cout << b << endl;
    changeByPointerRef(&b);
    cout << b << endl;

    changeByAliasRef(b);
    cout << b << endl;

    return 0;
}