#include<bits/stdc++.h>
using namespace std;

int binarySearch(int *arr,int size,int key,int low,int high)
{
    int mid;
    while(low<=high){
        mid =(low+high)/2;
            if(key==arr[mid])
                return mid;
            else if(key<arr[mid])
                high=mid-1;
            else    
                low=mid+1;
    }
    cout<<"Not Found the Element"<<endl;
    return -1;
}

int recursiveBinarySearch(int *arr, int key, int low, int high)
{
    if(low<=high){
        int mid =(low+high)/2;
            if(key==arr[mid])
                return mid;
            else if(key<arr[mid])
                recursiveBinarySearch(arr,key,low,mid-1);
            else
                recursiveBinarySearch(arr,key,mid+1,high);         
    }
    else
        return -1;
}

int main()
{
    int key=0;
    int arr[]={7,9,10,14,17,26,30};
    cout<<"What to search for"<<endl;
    cin>>key;
    int size = (sizeof(arr)/sizeof(int));
    int low,high;
    low=0;
    high = (size-1);
    // cout<<"Found at index -> "<<binarySearch(arr,size,key,low,high)<<endl;
    cout<<"Found at index -> "<<recursiveBinarySearch(arr,key,low,high);
    return 0;
}