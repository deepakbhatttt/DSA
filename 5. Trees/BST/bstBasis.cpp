#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node *lchild;
    int data;
    Node *rchild;
} *root = NULL;

// Insert in BST
void insertInBST(int key)
{
    Node *t=root;
    Node *r,*p;

    //For creating the first root node 
    if(root==NULL){
        p=new Node;
        p->data=key;
        p->lchild=p->rchild=NULL;
        root=p;
        return;
    }
    // Creating rest of the nodes
    while (t!=NULL)
    {
        r=t;
        if(key<t->data)
            t=t->lchild;
        else if(key>t->data)
            t=t->rchild;
        else
            return;
    }
        p=new Node;
        p->data=key;
        p->lchild=p->rchild=NULL;

        if(key<r->data)
            r->lchild=p;
        else    
            r->rchild=p;
}

// Recursive function to Insert Elements in BST
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


int heightOfTree(Node *p)
{
    int x,y;
    if(p==NULL)return 0;
    x=heightOfTree(p->lchild);
    y=heightOfTree(p->rchild);
    return (x>y)?(x+1):(y+1);
}
Node *inorderPredessor(Node *p)
{
    while(p && p->rchild!=NULL)
        p=p->rchild;
    return p;
}
Node *inorderSucessor(Node *p)
{
    while(p && p->lchild!=NULL)
        p=p->lchild;
    return p;
}
//Recursive function to delete elements
Node* deleteElements(Node *p, int key)
{
    Node *q;
    if(p==NULL)
        return NULL;
    if(p->lchild==NULL && p->rchild==NULL)
    {
        if(p==root)
            root=NULL;
        free(p);
        return NULL;
    }

    if(key<p->data)
        p->lchild = deleteElements(p->lchild,key);
    else if(key>p->data)
        p->rchild = deleteElements(p->rchild,key);
    else
    {
        if(heightOfTree(p->lchild) > heightOfTree(p->rchild))
        {
            q = inorderPredessor(p->lchild);
            p->data=q->data;
            p->lchild=deleteElements(p->lchild,q->data);
        }
        else
        {
            q = inorderSucessor(p->rchild);
            p->data=q->data;
            p->rchild=deleteElements(p->rchild,q->data);
        }
    }
    return p;
}

void InorderTraversal(Node *p)
{
    if(p){
        InorderTraversal(p->lchild);
        cout<<p->data<<endl;
        InorderTraversal(p->rchild);
    }
}

// Iterative function to perform Search in BST 
Node *iterativeSearchInBST(Node *p, int key)
{
    while (p != NULL && p->data!=key){
        p = key<p->data ? p->lchild : p->rchild;
    }
    return p;
}
// Recursive Function to perform Search in BST
Node *recursiveSearchInBST(Node *p, int key)
{
    if (p == NULL)
        return NULL;
    if (key == p->data)
        return p;
    if (key < p->data)
        return recursiveSearchInBST(p->lchild, key);
    if (key > p->data)
        return recursiveSearchInBST(p->rchild, key);
}

int main()
{
    root= recursiveInsertInBST(root,10);
        recursiveInsertInBST(root,5);
        recursiveInsertInBST(root,20);
        recursiveInsertInBST(root,8);
        recursiveInsertInBST(root,30);

    // insertInBST(10);
    // insertInBST(5);
    // insertInBST(20);
    // insertInBST(8);
    // insertInBST(30);

    InorderTraversal(root);
    return 0;
}