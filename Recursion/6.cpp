// Printing all the Subsequences
#include<bits/stdc++.h>
using namespace std;

void printSubsequence(int index,vector<int> &b,vector<int> &arr)
{
    if(index>=arr.size())
    {
        for (auto it : b)
            cout<<it<<"";
        if(b.size()==0)
            cout<<"{}";
        cout<<endl;
        return;
    }
// Take or pick the particular index to the subsequence 
    b.push_back(arr[index]);
    printSubsequence(index+1,b,arr);
    b.pop_back();

// Not pick or not take condition, this element is not adds to your subsequence
    printSubsequence(index+1,b,arr);
}
int main()
{
    vector<int> arr = {3,2,1};
    vector<int> b;
    printSubsequence(0,b,arr); 
return 0;
}