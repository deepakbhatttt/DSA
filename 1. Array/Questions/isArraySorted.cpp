#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *arr,int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]>=arr[i-1]){}
        else
            return false;
    }
    return true;
}

int main()
{
    int arr1[]={1,5,7,6,3,9,10};
    int arr2[]={2,4,5,9,10,12,36};
    int size =7;
    cout<<isSorted(arr1,size)<<endl;
    cout<<isSorted(arr2,size)<<endl;
}