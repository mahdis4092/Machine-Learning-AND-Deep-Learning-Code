#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int* p = &x;
    int** ptr = &p;

    cout << ptr << endl;     // address of p
    cout << *ptr << endl;    // address of x
    cout << **ptr << endl;   // value of x (10)
    cout << *(*ptr) << endl; // value of x (10)
}

