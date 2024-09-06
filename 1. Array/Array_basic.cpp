#include<iostream>
using namespace std;
int main()
{
//  Deceleration and Initialization of Array
/*
    // int a[5];   //if we try to print this array it will print garbage values
    // int a[5] = {2,4,6,8,10};    //array is declared with size provided and assigned values
    // int a[5] = {0}; //array is declared wth size 5 and every index is initialized with value 0
    // int a[] = {2,3,4};  //array is declared without giving the size, it automatically has the size as the no. of inputs
        // cout<<sizeof(a);  //Size of int in this compiler is 4, so size of array a will be 4*3=12
*/  

// Accessing elements of an Array
/*
    int a[]={1,3,5,7,9};
    cout<<a[3]<<endl;
    cout<<3[a]<<endl;
    cout<<*(a+3)<<endl;
*/

//Allocating memory for array in heap
/*
    int *p;
    p=new int[5];   //Memory Allocation
    for (int j=0; j<5; j++)
        {
            cin>>p[j];
        }
    delete []p; //Deallocation of memory
*/

//2D Array
//Using traditional method
/*
    int A[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<4; j++)
        {
            cout<<A[i][j]<<"\t";
        }
        cout<<endl;
    }
*/

//Using single pointer (partially inside heap memory)
/*
    int *B[3];  //it is an array of pointers
    B[0]=new int[4];
    B[1]=new int[4];
    B[2]=new int[4]; 
    B[1][2]=15; //Assigining value
*/
//Using double pointer (complletely inside heap memory)
/*
    int **C;
    C= new int*[3];
    C[0]=new int[4];
    C[0]=new int[4];
    C[0]=new int[4];
    C[1][2]=15; //Assigning value
*/

//Traversing through 2D Array
/*
    int a[3][4]={{1,2,3,4},
                {5,6,7,8},
                {9,10,11,12}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            cout<<a[i][j]<<" ";
    }
*/ 
return 0;
}