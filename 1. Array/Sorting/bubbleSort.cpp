#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}
/*iterates from the end of the array to the beginning*/
// void bubbleSort(int *arr, int size)
// {
//     for(int i=size-1;i>=1;i--)
//     {
//         for(int j=0;j<=i-1;j++)
//         {
//             if(arr[j]>arr[j+1])
//                 swap(arr[j],arr[j+1]);
//         }
//     }
// }

int main()
{
    int arr[]={4,3,8,10,2,6,5};
    int size = sizeof(arr)/sizeof(int);

    bubbleSort(arr,size);
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
return 0;
}