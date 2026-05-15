#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    //show address of variable a in the memory
    cout<<"Address of variable a : "<< &a <<endl;
    //Pointers – Special variable that store address of other variables.
    int* ptr = &a;
    cout<<"Address of variable a that hold by pointer variable: "<< ptr <<endl;

    float score = 100.25;
    float* ptr1 = &score;
    cout<< ptr1 <<endl;

    //pointer to pointer - Store the address of another pointer
    cout<< "Pointer to Pointer : "<<endl;
    int b = 20;
    int* ptr2 = &b;
    int** parentptr2 = &ptr2;

    cout<< &b <<endl;
    cout<< ptr2 <<endl;

    cout<< &ptr2 <<endl;
    cout<< "Address of pointer variable ptr2 that hold by parentptr2 : " << parentptr2 << endl;

    //Dereference(value at address) Operator -> *

    cout<<"value at address b using dereferencing : " << *(&b) <<endl;
    cout<<*ptr2<<endl;

    //pointer to pointer dereferencing
    //show address of ptr2 address
    cout<< &ptr2 <<endl;

    //show address of ptr2 ,because pointer of pointer [parentptr2] hold address of ptr2
    cout<< parentptr2 <<endl;
    //show address of parentptr2
    cout<< *parentptr2 <<endl;
    //show value of parentptr2
    cout<< *(*parentptr2) <<endl;




}
