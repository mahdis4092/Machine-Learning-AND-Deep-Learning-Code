/*
a = 10 is created in main

changeA(a) passes a copy of value (10)

Function parameter a is a new local variable

Changing it does not affect original a
*/
#include<iostream>
using namespace std;

void changeA(int a)   // pass by value
{
    a = 20;           // modifies local copy only
}

int main()
{
    int a = 10;
    changeA(a);       // passing value, not address
    cout << "Inside main function : " << a << endl;
    return 0;
}

