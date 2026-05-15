//null pointer that does not point to any location.
#include<iostream>
using namespace std;
int main()
{
    int** ptr = NULL;

    //show null pointer value
    cout<< ptr <<endl;

    //give error becuse we cannot dereference null pointer
    cout<< *ptr <<endl;
}
