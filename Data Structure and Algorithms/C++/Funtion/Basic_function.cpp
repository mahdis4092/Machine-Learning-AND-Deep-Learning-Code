#include<iostream>
using namespace std;
void greet()
{
    cout<< "Welcome to c++ programming in function"<<endl;
}
int square(int x)
{
    return x * x;
}

int main()
{
    greet();
    int result = square(5);
    cout<< "RESULT OF SQUARE : "<<result<<endl;

    return 0;
}
