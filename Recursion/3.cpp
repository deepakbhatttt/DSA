#include<bits/stdc++.h>
using namespace std;

int sumOfFirstN(int n)
{
    if(n==0)
        return 0;
    return(n + sumOfFirstN(n-1));
}

int main()
{
    int a;
//Sum of First N Numbers
    cout<<"Print Sum of first N Numbers"<<endl;
    cout<<"Enter N"<<endl;
    cin>>a;
    cout<<sumOfFirstN(a);
    return 0;
}