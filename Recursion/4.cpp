#include<bits/stdc++.h>
using namespace std;

// Reverse the Array
void reverseArray(int *arr, int n, int i)
{
   if(i >= n/2)
        return;
   swap(arr[i],arr[n-i-1]);
   reverseArray(arr,n,i+1);
}

// Check for Palindrome
bool checkForPalindrome(string &str,int i)
{
    // cout<<str;
    if(i>=str.length()/2)
        return true;
    if(str[i]!=str[str.length()-i-1])
        return false;
    checkForPalindrome(str,i+1);
}

int main()
{
// Reversing the Array
/*
    int size;
    cout<<"Reverse Array"<<endl;
    cout<<"Enter Size"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter"<<size<<"Elements : "<<endl;

    for (int i = 0; i < size; i++)
        cin>>arr[i];
    reverseArray(arr,size,0);

    cout<<"After Reversing Array :"<<endl;
    for (int i = 0; i < size; i++)
        cout<<arr[i]<<" ";
*/


// Checking For Palindrome
/*
    string str ="MADAM";
    cout<<"Check For Palindrome"<<endl;
    cout<<"Enter String"<<endl;
    // cin>>str;
    cout<<checkForPalindrome(str,0)<<endl;
*/
    return 0;
}