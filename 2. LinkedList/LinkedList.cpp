#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
}*first=NULL;


//*Creating Linked List from an array//*
    void create(int A[], int n)
    {
        int i;
        struct node *t,*last;
        first=new node;
        
        first->data=A[0];
        first->next=NULL;
        last=first;

        for(i=1;i<n;i++)
        {
            t = new node;
            t->data=A[i];
            t->next=NULL;
            last->next=t;
            last=t;
        }
    }

//*Displaying Linked List//*
    void Display(struct node *p)    //Iterative Displaying of a Linked List
    {
        while(p!=NULL)
        {
            cout<<p->data<<" ";
            p=p->next;
        }
        cout<<endl;
    }
    void recDisplay(struct node *p) //Reccursive Display of a Linked List
    {
        if(p!=NULL)
        {
            cout<<p->data<<" ";
            recDisplay(p->next);
        }
        cout<<endl;
    }


//*Counting Nodes in a Linked List//*
    void nodeCount(struct node *p)      //Iterative Counting Nodes in a Linked List
    {
        int count=0;
        while(p!=NULL)
        {
            count++;
            p=p->next;
        }
        cout<<"Number of Nodes in Linked List are:- "<<count<<endl;
    }
    int recNodeCount(struct node *p)        //Reccursive Counting Nodes in a Linked List
    {
        if(p==0)
            return 0;
        else
            return recNodeCount(p->next)+1;
    }


//*Sum of Elements of a Linked List//*
    void sumOfElements(struct node *p)      //Iterative Sum of Elements of a Linked List
    {
        int sum=0;
        while (p!=NULL)
        {
            sum=sum+p->data;
            p=p->next;
        }    
        cout<<"Sum of Elements :- "<<sum <<endl;  
    }
    int recSumOfElements(struct node *p)        //Reccursive Sum of elements of a Linked List
    {
        if(p==0)
            return 0;
        else
            return recSumOfElements((p->next))+(p->data);
    }

//*Maximum Element in a Linked List//*
void maxElement(struct node *p)
{
    int max=INT_MIN;
    while (p!=NULL)
    {
        if(p->data>max)
            max=p->data;
        p=p->next;        
    }
    cout<<"Maxmium Element in the Linked List :- "<<max<<endl;
}

int recMaxElement(struct node *p)
{
    int x;

    if(p==0)
        return INT_MIN;    
    /*
    else
    {
        x=recMaxElement(p->next);
            if(x>p->data)
                return x;
            else
                return p->data;
    }
    */
//OR
    x=recMaxElement(p->next);
    return x>(p->data)?x:(p->data);
}

void Search(node *p, int key)
{
    int i=0;
    while(p!=NULL)
    {
        i++;
        if(key==p->data)
            cout<<"FOUND"<<key<<"at "<<i<<" node"<<endl;
        else    
            p=p->next;    
    }
}

node * recSearch(node *p,int key)
{
    if (p==NULL)
        return NULL;
    if(key==p->data)
        return p;
    return recSearch(p->next,key);
}

void insertBegin(int key)
{
    node *t=new node;
    t->data=key;
    t->next=first;
    first=t;
}
void insertLast(int key)
{

}
void insertInLoc(int loc, int key)
{
    node *t=new node;
    t->data=key;
    

}


int main()
{
    int arr[10],n,opt,key;
    while(1){
        cout<<"What operation do you want to perform "<<endl;
        cout<<"1. Create Linked List \n 2. Display Linked List \n 3. Count Node in Linked List \n 4.Sum Of All Elements"<<endl;
        cout<<"5. Maxmium Element of a Linked List \n 6. Search Element \n 0.Exit"<<endl;
        cin>>opt;
        switch(opt)
        {
            case 1:
            // Creating Linked List
                cout<<"Enter the Number of Elements to insert in Linked List :- ";
                cin>>n;
                cout<<"Enter Elements :---- "<<endl;
                    for(int i=0;i<n;i++)
                        cin>>arr[i];
                create(arr,n);
            break;

            case 2:
            //Display Linked List
                Display(first);
                // recDisplay(first);
            break;
            case 3:
                nodeCount(first);
                // cout<<"Number of Nodes in Linked List are:- "<<recNodeCount(first)<<endl;    //Recursive Function
            break;
            case 4:
                sumOfElements(first);
                // cout<<"Sum of Elements :- "<<recSumOfElements(first)<<endl;    //Recursive Function
            break;
            case 5:
                maxElement(first);
                // recMaxElement(first);        //Recursive Function
            break;
            case 6:
                cout<<"Enter the Element to Search in the Linked List : ";
                cin>>key;
                Search(first,key);
            break;
            case 7:
                //Inserting in the Linked List
                int opt,key;
                cout<<"Enter the Element to insert : ";
                cin>>key;
                cout<<"Where do you want insert the new element ? "<<endl;
                cout<<"1.At the beginning \n 2.At Last \n 3. At your desired Location "<<endl;
                cin>>opt;
                    switch(opt)
                    {
                        case 1:
                            insertBegin(key);
                        break;
                        case 2:
                            insertLast(key);
                        break;
                        case 3:
                            int loc;
                            cout<<"Enter the Location : ";
                            cin>>loc;
                            insertInLoc(loc,key);
                        break;
                        default:
                            cout<<"Select the correct option"<<endl;
                        break;
                    }
            break;

            case 0:
                exit(0);
            break;
        }
    }    
    return 0;
}
