#include<bits/stdc++.h>
using namespace std;

void selectionSort(int *arr, int size)
{
    for(int i=0;i<size-1;i++)
    {
        int min=i;
            for(int j=i;j<size;j++)
            {
                if(arr[j]<arr[min])
                    min=j;
            }
            swap(arr[i],arr[min]);
    }
}

int main()
{
    int arr[]={4,3,8,10,2,6,5};
    int size = sizeof(arr)/sizeof(int);

    selectionSort(arr,size);
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
return 0;
}