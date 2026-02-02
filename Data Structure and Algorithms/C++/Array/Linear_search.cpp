#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50};
    int target = 30;
    bool found = false;
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i<n ; i++)
    {
        if(arr[i]==target){
            found = true;
            break;
        }
    }
    if(found){
        cout<<"Element Found!";
    }
    else
    {
        cout<<"Element Not Found";
    }
    return 0;
}
