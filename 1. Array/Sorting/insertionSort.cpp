#include<bits/stdc++.h>
using namespace std;

void insertionSort(int *arr, int size)
{
    for(int i=0;i<size;i++)
    {
        int j=i;
        while (j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }  
    }
}

int main()
{
    int arr[]={4,3,8,10,2,6,5};
    int size = sizeof(arr)/sizeof(int);

    insertionSort(arr,size);
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
return 0;
}