// Printing all the Subsequences
#include<bits/stdc++.h>
using namespace std;

void printSubsequenceWithSum(int index,vector<int> &b,vector<int> &arr,int sum,int s)
{
    if(index==arr.size())
    {
        if(s==sum)
        {
            for (auto it : b)
                cout<<it<<" ";
            cout<<endl;
        }
        return;
    }
    b.push_back(arr[index]);
    s+=arr[index];
    printSubsequenceWithSum(index+1,b,arr,sum,s);

    s-=arr[index];
    b.pop_back();
// Not pick or not take condition, this element is not adds to your subsequence
    printSubsequenceWithSum(index+1,b,arr,sum,s);
}



int main()
{
    vector<int> arr = {1,2,1};
    vector<int> b;
    int sum = 2;
    printSubsequenceWithSum(0,b,arr,sum,0); 
return 0;
}