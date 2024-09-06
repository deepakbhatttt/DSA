#include<iostream>
using namespace std;

//1. Sum of first N Natural Numbers
/*
int sumn(int); 
int main()
{
    int num;
    cout<<"Enter The Number :-   "<<endl;
    cin>>num;
    cout<<"Sum = "<<sumn(num)<<endl;

return 0;
}
int sumn(int n)
{
    int sum=0;
    if(n==0)
        return 0;
    return sumn(n-1)+n;
}
*/


//2. Factorial 
/*
int fact(int);
int main()
{
    int num;
    cout<<"Enter A Number :- ";
    cin>>num;
    cout<<"Factorial of "<<num<<":- "<<fact(num);
return 0;
}
int fact(int n)
{
    if(n==0 || n==1)
        return 1;
    return n*fact(n-1);
}
*/


//3.Power Using Recursion
/*
int power(int,int);
int pow(int,int);
int main()
{
    int num,p;
    cout<<"Enter Number :- ";
    cin>>num;
    cout<<"Enter Power :- ";
    cin>>p;
    // cout<<power(num,p);
 cout<<pow(num,p);
return 0;
}
int power(int n,int p)
{
    if(p==1)
        return n;
    else
        return n*power(n,p-1);    
}
//Can Also be calculated by the following function in less multiplication
int pow(int n,int p)
{
    if(p==0)
        return 1;
    if(p%2==0)
        return pow(n*n ,(p/2));
    else 
        return pow(n*n ,(p-1)/2)*n;
}


*/
//4. Taylor Series Using Recursion
/*
int taylor(int,int);
int main()
{
    int a;
return 0;
}
int taylor()
{
    
}
*/

//5.Fibonacci Series Using Reccurssion
/*
int fab(int);
int main()
{
    int n;
    cin>>n;
    cout<<fab(n);
return 0;
}
int fab(int n)
{
    if(n==1)
        return 1;
    else if(n==2)   
        return 0; 
}
*/

