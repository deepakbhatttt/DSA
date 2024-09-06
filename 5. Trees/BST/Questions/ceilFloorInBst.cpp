/*Problem Statement: Given a BST and a number X, find the Ceil and floor of X.
Note: Ceil(X) is a number that is either equal to X or is immediately greater than X.
Note: Floor(X) is a number that is either equal to X or is immediately lesser than X.
If Ceil or Floor cannot be found, return -1.*/

#include<bits/stdc++.h>
using namespace std;

struct Node{
    Node *lchild;
    int data;
    Node *rchild;
} *root = NULL;

Node* recursiveInsertInBST(Node *p, int key)
{
    Node *t;
    if(p==NULL)
    {
        t= new Node;
        t->data = key;
        t->lchild=t->rchild=NULL;
        return t;
    }
    if(key<p->data)
        p->lchild = recursiveInsertInBST(p->lchild,key);
    else if(key>p->data)   
        p->rchild = recursiveInsertInBST(p->rchild,key);
    
    return p;
}

int findCeil(Node *r, int key)
{
    int ceil=-1;
    while(r){
        if(r->data==key){
            ceil=r->data;
            return ceil;
        }
        if(r->data<key)
            r=r->rchild;
        else{
            ceil=r->data;
            r=r->lchild;
        }
    }
    return ceil;
}
int findFloor(Node *r, int key)
{
    int floor=-1;
    while(r){
        if(r->data==key){
            floor=r->data;
            return floor;
        }
        if(r->data>key)
            r=r->lchild;
        else{
            floor=r->data;
            r=r->rchild;
        }
    }
    return floor;

}

int main()
{ 
    root = recursiveInsertInBST(root,10);
    recursiveInsertInBST(root,5);
    recursiveInsertInBST(root,13);
    recursiveInsertInBST(root,3);
    recursiveInsertInBST(root,6);
    recursiveInsertInBST(root,11);
    recursiveInsertInBST(root,14);
    recursiveInsertInBST(root,2);
    recursiveInsertInBST(root,4);
    recursiveInsertInBST(root,9);

    cout<<"Ceil Value = "<<findCeil(root,8)<<endl;
    cout<<"Floor Value = "<<findFloor(root,8);
return 0;
}