#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
        m[nums[i]]++;
    for (auto it : m)
    {
        if(it.second==1)
        cout<<it.first;
    }
    return 0;
}