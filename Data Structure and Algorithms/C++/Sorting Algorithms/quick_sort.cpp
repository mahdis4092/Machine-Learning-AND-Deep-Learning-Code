#include<iostream>
#include<vector>
using namespace std;

int Partition(vector<int>&arr,int strt,int en)
{
    int idx = strt -1;
    int pivot = arr[en];
    for(int j = strt ; j<en ; j++)
    {
        if(arr[j]<pivot)
        {
            idx++;
            swap(arr[j],arr[idx]);
        }
    }

     idx++;
     swap(arr[en],arr[idx]);
     return idx;
}

void quickSort(vector<int>&arr,int strt,int en)
{
    if(strt<en)
    {
        int pividx = Partition(arr,strt,en);
        quickSort(arr,strt,pividx -1);//left part
        quickSort(arr,pividx+1,en);//right part

    }
}

int main()
{
    vector<int>arr ={5,2,6,4,1,3};
    quickSort(arr,0,arr.size()-1);

    for(int val:arr)
    {
        cout<< val <<" ";
    }
    return 0;
}
