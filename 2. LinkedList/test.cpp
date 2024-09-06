#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
     int data;
      Node *next;
};

// void create(int A[], int n)
// {
//     int i;
//     Node *t,*last;
//     first=new node;
    
//     first->data=A[0];
//     first->next=NULL;
//     last=first;

//     for(i=1;i<n;i++)
//     {
//         t = new node;
//         t->data=A[i];
//         t->next=NULL;
//         last->next=t;
//         last=t;
//     }

// }

// void Display(Node *p)    //Iterative Displaying of a Linked List
// {
//     while(p!=NULL)
//     {
//         cout<<p->data<<" ";
//         p=p->next;
//     }
//     cout<<endl;
// }

void recDisplay(Node *p) //Reccursive Display of a Linked List
{
    if(p!=NULL)
    {
        cout<<p->data<<" ";
        recDisplay(p->next);
    }
    cout<<endl;
}

Node *newNode(Node **p, int num)
{
    Node *temp;
    temp = new Node;
    temp->data=num;
    temp->next=NULL;
    if(*p==NULL)
    {
        *p=temp;
        return *p;
    }
    Node* t=*p;
    while(t->next!=NULL){
        t=t->next;
    }
    t->next=temp;
}

int main()
{
    //int arr[]={7,2,9,5,3,1},n,opt;
    Node *first=NULL;

    // first = new node;
    newNode(&first,5);
    //   cout<<first->data;
    newNode(&first,1);
    newNode(&first,6);
    newNode(&first,2);
    newNode(&first,7);
    // cout<<first->data;
    recDisplay(first);

    
    // while(1){
    //     cout<<"What operation do you want to perform "<<endl;
    //     cout<<"1. Create Linked List \n 2. Display Linked List \n 3.Exit"<<endl;
    //     cin>>opt;
    //     switch(opt)
    //     {
    //         case 1:
    //             create(arr,n,&first);
    //         //Creating Linked List
    //             // cout<<"Enter the Number of Elements to insert in Linked List :- ";
    //             // cin>>n;
    //             // cout<<"Enter Elements :---- "<<endl;
    //             //     for(int i=0;i<n;i++)
    //             //         cin>>arr[i];
    //             // create(arr,n,first);
    //         break;

    //         case 2:
    //         //Display Linked List
    //             Display(first);
    //             // recDisplay(first);
    //         break;

    //         case 3:
    //             exit(0);
    //         break;
    //     }
    // }    
    return 0;
}