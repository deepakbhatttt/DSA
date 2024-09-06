#include<bits/stdc++.h>
using namespace std;

void linearSearch(int *arr,int size,int key)
{
    for (int i = 0; i < size; i++)
    {
        if(key==arr[i]){
            cout<<"Found at index "<<i<<endl;
            return;
        }
    }
    cout<<key<<"Not Found"<<endl;
}

int main()
{
    int key=0;
    int arr[]={10,26,4,9,6,8};
    cout<<"What to search for"<<endl;
    cin>>key;
    int size = (sizeof(arr)/sizeof(int));
    linearSearch(arr,size,key);
    return 0;
}