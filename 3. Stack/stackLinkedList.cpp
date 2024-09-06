#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*top=NULL;

void push(int x)
{
    Node *t = new Node;
    if(t == NULL)
        cout<<"Stack Overflow, Heap is Full ...............!"<<endl;
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}

bool isEmpty()
{
    if(top==NULL)
        return true;
    return false;
}

int main()
{
 int data;


return 0;
}