
#include<bits/stdc++.h>
using namespace std;

void rightRotate(int *arr,int n,int k){
        int temp[n];    //Temp variable to store the elements after cyclic rotation
        
        for(int i=0;i<n;i++)
            temp[i]=arr[(i+k)%n];   //Storing elements in temp after cyclic rotation
        
        for (int i = 0; i < n; i++)
            arr[i]=temp[i];     //Copying back values from temp to arr
        
        for (int i = 0; i < n; i++)
            cout<<arr[i];       //Printing the array
}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int rotation =4;
    int size = sizeof(arr)/sizeof(int);
        rightRotate(arr,size,rotation);
            
return 0;
}