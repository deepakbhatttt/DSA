#include<bits/stdc++.h>
using namespace std;

void reverse(int i, int arr[],int n)
{
    if(i>=n/2)
        return;
    swap(arr[i],arr[n-1-i]);
    reverse(i+1,arr,n);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin>>arr[i];
        
    reverse(0,arr,n);
    
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    return 0;
}

/*This can also be done using two pointers i and j
i can be placed in the starting index and j at the end of the array
and swap i and j until i>=j
*/