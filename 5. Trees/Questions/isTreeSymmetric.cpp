#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *lchild;
    int data;
    Node *rchild;
};

// Queue for creating the Tree and remembring the preciding node addresses
class Queue
{
private:
    int size;
    int front;
    int rear;
    Node **Q; // it will store the address of Nodes
public:
    // Constructor
    Queue()
    {
        front = rear = -1;
        size = 10;
        Q = new Node *[size];
    }
    // Parameterized Constructor
    Queue(int size)
    {
        front = rear = -1;
        this->size = size;
        Q = new Node *[this->size];
    }

    void enqueue(Node *x);
    Node *dequeue();
    int isEmpty() { return front == rear; }
    void Display();
};

// Queue Functions
void Queue::enqueue(Node *x)
{
    if (rear == size - 1)
        cout << "Queue Full" << endl;
    else
    {
        rear++;
        Q[rear] = x;
    }
}

Node *Queue::dequeue()
{
    Node *x = NULL;
    if (front == rear)
        cout << "Queue Empty !!" << endl;
    else
    {
        x = Q[front + 1];
        front++;
    }
    return x;
}

void Queue::Display()
{
    for (int i = front + 1; i <= rear; i++)
        cout << Q[i] << endl;
}

// Stack for the iterative Traversals
class Stack
{
private:
    int size;
    int top;
    Node **Q; // it will store the address of Nodes
public:
    // Constructor
    Stack()
    {
        top = -1;
        size = 10;
        Q = new Node *[size];
    }
    // Parameterized Constructor
    Stack(int size)
    {
        top = -1;
        this->size = size;
        Q = new Node *[this->size];
    }

    // void createStack(Node* x);
    void pushStack(Node *x);
    Node *popStack();
};
// Stack Functions
void Stack::pushStack(Node *x)
{
    if (top = size - 1)
        cout << "Stack Full" << endl;
    else
        Q[++top] = x;
}

Node *Stack::popStack()
{
    Node *x = NULL;
    if (top == -1)
        cout << "Stack Empty" << endl;
    else
    {
        x = Q[top];
        --top;
        return x;
    }
}

// Tree Class and it's Functions
class Tree
{
public:
    Node *root;
    Tree()
    {
        root = NULL;
    }
    void createTree();
    bool fun(Node *l, Node *r)
    {
        if (l == NULL && r == NULL){
            cout<<"Cond1"<<endl;
            return true;
        }
        // if (l == NULL || r == NULL)
        //     return false;
        if((l==NULL && r!=NULL)||(l!=NULL && r==NULL)){
            cout<<"Cond2";
            return false;
        }
        return ((l->data == r->data) && fun(l->lchild, r->rchild) && fun(l->rchild, r->lchild));
    }
    bool isSymmetric()
    {
        if (root == NULL)
            return true;
        return fun(root->lchild, root->rchild);
    }
    // void preOrder(Node *p);
    // void inOrder(Node *p);
    // void postOrder(Node *p);
    // void levelOrder(Node *p);

    // void preOrderIterative(Node *p);
    // void inOrderIterative(Node *p);
    // void postOrderIterative(Node *p);
    // void levelOrderIterative(Node *p);
};

void Tree::createTree()
{
    Node *p, *t;
    int x;
    Queue q(25);
    cout << "Enter the root value" << endl;
    cin >> x;

    root = new Node;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.enqueue(root);

    while (!q.isEmpty())
    {
        p = q.dequeue();
        // For Left Child
        cout << "Enter Left Child of " << p->data << ":- ";
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.enqueue(t);
        }
        // For Right Child
        cout << "Enter Right Child of " << p->data << ":- ";
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}

int main()
{
    Tree t;
    t.createTree();
    cout<<t.isSymmetric();
    return 0;
}