#include<iostream>
using namespace std;

int changeA(int a)   // pass by value
{
    a = 20;          // modify local copy
    return a;        // return the value
}

int main()
{
    int a = 10;
    a = changeA(a);  // receive returned value
    cout << "Inside main function : " << a << endl;
    return 0;
}

