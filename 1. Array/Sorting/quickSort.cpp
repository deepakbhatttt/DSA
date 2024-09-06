#include<bits/stdc++.h>
using namespace std;

int partition(int *arr, int low, int high) {
    int i = low;
    int j = high;
    int pivot = arr[low];

    while (i < j) {
        while (arr[i] <= pivot && i <= high) {
            i++;
        }
        while (arr[j] > pivot && j >= low) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int *arr, int l, int h) {
    if (l < h) {
        int pivot = partition(arr, l, h);
        quickSort(arr, l, pivot - 1);
        quickSort(arr, pivot + 1, h);
    }
}
int main() {
    int arr[] = {4, 3, 8, 10, 2, 6, 5};
    int size = sizeof(arr) / sizeof(int);
    int low, high;
    low = 0;
    high = size - 1;
    quickSort(arr, low, high);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
return 0;
}
