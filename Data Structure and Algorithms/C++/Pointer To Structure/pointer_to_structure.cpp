#include<iostream>
#include<stdlib.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    //regular structure
    struct Rectangle r = {10,5};
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;

    //pointer structure
    Rectangle *p = &r;
    cout<< p->length <<endl;
    cout<< p->breadth <<endl;


}
