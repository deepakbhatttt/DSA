#include<bits/stdc++.h>
using namespace std;

void leftRotate(int *arr,int n,int d)
{
    int temp[n];
        for(int i=0;i<d;i++)
            temp[i]=arr[i];
        
        for(int i=d;i<n;i++)
            arr[i-d]=arr[i];

        for (int i=n-d; i < n; i++)
            arr[i]=temp[i-(n-d)];

        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
}

void leftRotateUsingReverse(int *arr, int n, int d)
{
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(int);
    int rotation = 3;
        // leftRotate(arr,size,rotation);
        leftRotateUsingReverse(arr,size,rotation);
}