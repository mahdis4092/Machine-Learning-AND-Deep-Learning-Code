#include<iostream>
#include<vector>
using namespace std;

void Merge(vector<int>&arr, int st, int mid , int en)
{
    vector<int>temp;
    int i = st; int j = mid+1;
    while(i<=mid && j<= en)
    {
        if (arr[i]<=arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }

    }

    while(i<=mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=en)
    {
        temp.push_back(arr[j]);
        j++;
    }
    for(int idx=0; idx<temp.size();idx++)
    {
        arr[idx+st]=temp[idx];
    }

}


void mergeSort(vector<int>&arr, int st , int en)
{
    if(st<en)
    {
       int mid = st + (en-st)/2;
       mergeSort(arr,st,mid);//left
       mergeSort(arr,mid+1,en);//right

       Merge(arr,st,mid,en);

    }

}

int main()
{
    vector<int>arr = {12,31,35,8,32,17};
    mergeSort(arr,0,arr.size()-1);

    for(int val:arr)
    {
        cout<<val<<" ";
    }
return 0;
}
