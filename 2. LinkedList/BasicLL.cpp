#include<bits/stdc++.h>
using namespace std;


struct Node{        //It is a self referencial structure(it has pointer of its own type(elf referencial pointer))
    int data;
    struct Node *next;  //Pointer of type Node(Self referencial pointer)
}*first=NULL,*second=NULL,*last=NULL;


void createLinkedList(struct Node *p)
{
    if(first==NULL)
    {
        struct Node *newnode;
        int no,x;
        cout<<"Enter Number of Nodes "<<endl;
        cin>>no;
        cout<<"Enter Data : ";
        cin>>x;
        first = new Node;
        first->data=x;
        first->next=NULL;
        last=first;
        --no;
        while(no!=0)
        {
            newnode=new Node;
            cout<<"Enter Data : ";
            cin>>x;
            newnode->data=x;
            newnode->next=NULL;
            last->next=newnode;
            last=newnode;
            --no;
        }
    }
    else
        cout<<"List Already Exist\nTry Ammending the List \n"<<endl;
}


void Display(struct Node *p)//Recursive Function to Traverse and Dispay all Nodes in a Linked List
{
    if(p!=NULL){
        cout<<p->data<<" -> ";
        Display(p->next);
    }
    cout<<" "<<endl;
}

    // void Display(struct Node *p)//Iterative Function to Traverse and Display all Nodes in a Linked List
    // {
    //     while(p!=Null)
    //     {
    //         cout<<p->data<<" -> ";
    //         p=p->next;
    //     }
    
    // }


void insertBeginning(struct Node *p)   //Adding New Element at the beginning of the Linked list
{
    int x;
    cout<<"Kindly Enter the Data"<<endl;
    cin>>x;
    struct Node *t = new Node;
    t->data=x;
    t->next=p;
    p=t;
}

void insertLocation(struct Node *p,int pos)    //Adding New Element at any location in the Linked list
{
    int x;
    cout<<"Kindly Enter the Data"<<endl;
    cin>>x;
    struct Node *t = new Node;
    t->data=x;
        for(int i=1;i<pos-1;i++)
            p=p->next;
    t->next=p->next;    
    p->next=t;
}

void insertEnd()
{
    int x;
    cout<<"Kindly Enter the Data"<<endl;
    cin>>x;
    struct Node *t = new Node;
    t->data=x;
    t->next=NULL;
    last->next=t;
    last=t;
    
}

void SearchElement(struct Node *p)
{
    int key,loc=0;
    cout<<"Enter Element to Search";
    cin>>key;
        while(p!=NULL){
            if(p->data==key){
                cout<<"Found at Location"<<loc<<endl;
                break;
            }
            loc++;
            p=p->next;
        }
}

Node *recursiveSearchElement(struct Node *p, int key)
{
    if(p==NULL)
        return NULL;
    if(key==p->data)
        return p;
    return recursiveSearchElement(p->next,key);
}

void DeleteElement(struct Node *p)
{

}

void reverseLinkedList(struct Node *p)
{
    struct Node *q = NULL, *r = NULL;
    while (p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
    cout<<"Linked List Reversed Successfully"<<endl; 
}

void recursiveReverseLinkedList(struct Node *p,struct Node *q)
{
    if(p!=NULL)
    {
        recursiveReverseLinkedList(p->next,p);
        p->next=q;
    }
    else
    {
        first=q;
    }
}

int CountNodes(struct Node *p)//Recursive Function to count Nodes in a Linked List
{
    int count=0;
    if(p==0)
        return 0;
    else
        return CountNodes(p->next)+1;    
}

    // int CountNodes(struct Node *p)//Iterative Function to count Nodes in a Linked List
    // {
    //     int count=0;
    //     while(p!=Null)
    //     {
    //         count++;
    //         p=p->next;
    //     }
    //     return count;
    // }

int AddAllElements(struct Node *p)//Adding all elements of  linked List
{
    if(p==0)
        return 0;
    else
        return AddAllElements(p->next) + p->data;
}

void mergeLinkedList(struct Node *first,struct Node *second)
{
    struct Node *third, *last;
    if(first->data<second->data)
    {
        third=last=first;
        first=first->next;
        last->next=NULL;
    }
    else
    {
        third=last=second;
        second=second->next;
        last->next=NULL;
    }

    while(first!=NULL&&second!=NULL)
    {

    }

}

void loopInLinkedList(struct Node *first)
{
    struct Node *p, *q;
    p=q=first;
    do
    {
        p=p->next;
        q=q->next;
        q=q!=NULL?q->next:NULL;
    } while (p&&q);
    if(p==q)
        cout<<"Loop Exist"<<endl;
    else
        cout<<"Loop Doesn't Exist"<<endl;
    //OR
    // p==q?  cout<<"Loop Exist":cout<<"Loop Doesn't Exist"<<endl;
}


int main()
{
    int n;
    do
    {
        cout<<"Enter Your Choice : "<<endl;
        cout<<"1. Create a Linked List"<<endl;
        cout<<"2. Display Linked List"<<endl;
        cout<<"3. Insertion"<<endl;
        cout<<"4. Search Element"<<endl;
        cout<<"5. Deletion"<<endl;
        cout<<"6. Reverse Linked List"<<endl;
        cout<<"7. Merge two Linked List"<<endl;
        
        cout<<"0 Exit"<<endl;
        cin>>n;
        switch (n)
        {
            case 1:
                createLinkedList(first);
            break;
        
            case 2:
                Display(first);
            break;

            case 3:
                int a;
                cout<<"Select from the Menu"<<endl;
                cout<<"1.At the Beginning /n At the desired location /n At the End "<<endl;
                cin>>a;
                    switch (a)
                    {
                        case 1:
                            insertBeginning(first);
                        break;
                        
                        case 2:
                            int pos;
                            cout<<"Kindly Enter the position "<<endl;
                            cin>>pos;
                            insertLocation(first,pos);
                        break;

                        case 3:
                            insertEnd();
                        break;

                        default:
                            cout<<"Enter the correct option"<<endl;
                        break;
                    }
            break;

            case 4:
                SearchElement(first);
            break;

            case 5:
                DeleteElement(first);
            break;

            case 6:
                reverseLinkedList(first);
                recursiveReverseLinkedList(first,NULL);
            break;

            case 7:
                mergeLinkedList(first,second);
            break;

            case 8:
                loopInLinkedList(first);
            break;

            case 0:
                exit(0);
            break;
            default:
                cout<<"Enter the correct option"<<endl;
            break;
        }
    }while(n);  

return 0;
}