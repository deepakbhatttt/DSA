#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = 0, j = 0, k = 0;
    vector<int> temp;

    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
            temp.push_back(nums1[i++]);
        else
            temp.push_back(nums2[j++]);
    }

    for (; i < m; i++)
        temp.push_back(nums1[i]);
    for (; j < n; j++)
        temp.push_back(nums2[j]);

    for(int i=0;i<(m+n);i++)
        cout<<temp[i]<<" ";
}

int main()
{
    vector<int> nums1{ 1, 5, 8, 10, 16 };
    vector<int> nums2{ 2, 3, 4, 9, 15 };

    merge(nums1, nums1.size(), nums2, nums2.size());

}