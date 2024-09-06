//Striver Recursion
#include<bits/stdc++.h>
using namespace std;

//1. Print Number from 1 to N
int print1toN(int i, int n)
{
    if(i>n)
        return 0;
    cout<<i<<endl; 
    print1toN(i+1,n);
}

//2. Print Number from N to 1
int printNto1(int n)
{
    if(n==1)
        return 1;
    cout<<n;
    printNto1(n-1);
}

//3. Print Number from 1 to N(Backtrack)
int print1toNBacktrack(int n)
{
    if(n==0)
        return 0; 
    print1toNBacktrack(n-1);
    cout<<n<<endl;
}

//4. Print Number from N to 1(Backtrack)
int printNto1Backtrack(int i,int n)
{
    if(i>n)
        return 0;
    printNto1Backtrack(i+1,n);
    cout<<i<<endl;   
}


int main()
{
    int a,b,c,d;

//1. Print Number from 1 to N
/*
    cout<<"Print from 1 to N"<<endl;
    cout<<"Enter N"<<endl;
    cin>>a;
    print1toN(1,a);
*/

//2. Print Number from N to 1
/*
    cout<<"Print from N to 1"<<endl;
    cout<<"Enter N"<<endl;
    cin>>b;
    cout<<printNto1(b)<<endl;
*/

//3. Print Number from 1 to N(Backtrack)
/*
    cout<<"Print from 1 to N(Using Backtracking)"<<endl;
    cout<<"Enter N"<<endl;
    cin>>c;
    print1toNBacktrack(c);
*/

//4. Print Number from N to 1(Backtrack)
/**/
    cout<<"Print from N to 1(Using Backtracking)"<<endl;
    cout<<"Enter N"<<endl;
    cin>>d;
    printNto1Backtrack(1,d);

return 0;
}
