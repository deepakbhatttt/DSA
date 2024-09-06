// Multiple Recursion Calls
#include<bits/stdc++.h>
using namespace std;

//Fibonacci sequence
int fibonacci(int n)
{
    if(n<=1)
        return n;
    return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    int a;
    cout<<"Fibonacci Sequence"<<endl;
    cout<<"Enter No."<<endl;
    cin>>a;
    cout<<fibonacci(a);
return 0;
}