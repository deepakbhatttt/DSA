#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
    Node (int val)
    {
        data = val;
        left = right = NULL;
    }
};


void preorderTraversal(Node *node)
{
    if(node==NULL)
        return;
    cout<<node->data<<" ";
    preorderTraversal(node->left);
    preorderTraversal(node->right);
}
void inorderTraversal(Node *node)
{
    if(node==NULL)
        return;
    inorderTraversal(node->left);
    cout<<node->data<<" ";
    inorderTraversal(node->right);
}
void postorderTraversal(Node *node)
{
    if(node==NULL)
        return;
    postorderTraversal(node->left);
    postorderTraversal(node->right);
    cout<<node->data<<" ";
}

void levelorderTraversal(Node *root)
{

}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(6);

    root->right = new Node(3);
    root->right->left = new Node(7);
    root->right->right = new Node(8);

    root->right->right->left = new Node(9);
    root->right->right->right = new Node(10);


    cout<<"Preorder Traversal :-- "<<endl;
    preorderTraversal(root);
    
    cout<<"\nInorder Traversal :-- "<<endl;
    inorderTraversal(root);

    cout<<"\nPostorder Traversal :-- "<<endl;
    postorderTraversal(root);

    cout<<"\nLevel order Traversal :-- "<<endl;
    levelorderTraversal(root);


return 0;
}