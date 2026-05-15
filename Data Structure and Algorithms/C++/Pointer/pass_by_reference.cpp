#include<iostream>
using namespace std;
//pass by reference using pointer
void changeA(int* ptr)
{
    *ptr = 20;
}

void changeB(int &b)
{
     b = 30;
}
int main()
{
    int a = 10;
    changeA(&a);
    cout<<"Inside main function : "<< a << endl;

    changeB(a);
    cout<<"Alias pointer value : "<< a <<endl;
    return 0;
}
