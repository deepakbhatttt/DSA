#include<bits/stdc++.h>
using namespace std;

int secondLargest(int *arr,int n)
{
    int largest = arr[0];
    int slargest = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest)
            slargest=arr[i];
    }
    return slargest;
}

int secondSmallest(int *arr,int n)
{
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i]>smallest && arr[i]<ssmallest)
            ssmallest=arr[i];
    }
    return ssmallest;
}

int main()
{
    int arr[]={1,3,30,21,56,20,25,33};
    int size = (sizeof(arr)/sizeof(int));
    cout<<"Second Largest Element is - "<<secondLargest(arr,size)<<endl;
    
    cout<<"Second Smallest Element is - "<<secondSmallest(arr,size);
return 0;
}