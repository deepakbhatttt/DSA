#include<bits/stdc++.h>
using namespace std;

void frequencyCountUsingMaps(int size, int arr[]){
    map<int,int>m;
    //Precompute
    for(int i=0;i<size;i++){
        m[arr[i]]++;
    }
// Iterating the complete Map
    // for(auto it:m){
    //     cout<<it.first<<"->"<<it.second<<endl;
    // }

    int q;
    cin>>q;
    while(q--){
        int no;
        cin>>no;
        cout<<m[no]<<endl;
    }
}

int main()
{
    int n;
    cin>>n;//No. of elements
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Using Maps
    frequencyCountUsingMaps(n,arr);

//Precompute using Hash
    // int hash[13]={0};
    // for (int i = 0; i < n; i++){
    //     hash[arr[i]]++; //
    // }

    // int q;
    // cin>>q;//Input no of queies, 
    // while (q--)
    // {
    //     int no;
    //     cin>>no;//Input number whose frequency is to be shown 'No shouldn't be greater than 12 (size of Hash is 13) else it will display garbage value'
    //     cout<<hash[no]<<endl;//Frequency is fetched from the hash .
    // }
    return 0;
}