#include<iostream>
using namespace std;

void InsertionSort(int arr[],int n)
{
    for(int i =1 ; i<n ; i++)
    {
       int  temp = arr[i];
       int  j = i -1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;

    }
}

void PrintSort(int arr[],int n)
{
    for(int i = 0 ; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={43,31,26,29,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr,n);
    PrintSort(arr,n);
    return 0 ;
}
