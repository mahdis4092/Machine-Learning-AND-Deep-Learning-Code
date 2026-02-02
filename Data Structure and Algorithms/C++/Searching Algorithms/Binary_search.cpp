#include<iostream>
using namespace std;

int Binary_search(int arr[],int n,int x)
{
    int low  = 0 ;
    int high = n-1;
    while(low<=high)
    {
        int mid = low + (high - low)/2;
        //search if elements in mid
        if(arr[mid]==x)
            return mid;
        //check if elements in left side of mid
        if(arr[mid]<x)
            low = mid + 1;
        //check if elements in the right side of mide
        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[]={2,3,6,8,10,12,14,18,22,23};
    int x = 14;
    int n =sizeof(arr)/sizeof(arr[0]);

    int result = Binary_search(arr,n,x);

    if(result == -1)
        cout<<"ELEMNETS NOT FOUND IN THE ARRAY ";
    else
        cout<<"ELEMENTS FOUND IN  THE ARRAY : "<<result;
}
