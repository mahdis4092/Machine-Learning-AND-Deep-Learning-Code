#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr ={10,20,30,40};
    int element = 50 ;

    //Items before insertion
    cout<<"ARRAY BEFORE INSERTION : ";

    for (int i =0 ; i<arr.size(); i++)
    {
        cout<<arr[i]<<endl;
    }
    //Item insertion
    arr.insert(arr.begin(),element);

    //Items after insertion

    cout<<"ARRAY AFTER INSERTION : ";
    for (int i =0 ; i<arr.size(); i++)
    {
        cout<<arr[i]<<endl;
    }


}
