#include <bits/stdc++.h>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *s;
};

void pushInStack(Stack *st)
{
    int data;
    cout << "Enter Element to Push to Stack :";
    cin >> data;
    st->s[++st->top] = data;
}

void popFromStack(Stack *st)
{
    --st->top;
}

void topOfStack()
{
    
}

void displayStack(Stack st)
{
    for (int i = st.top; i >= 0; i--)
        cout << st.s[i] << endl;
}

int main()
{
    Stack st;
    int option;
    cout << "Enter Size of Stack" << endl;
    cin >> st.size;
    st.top = -1;
    st.s = new int[st.size];
    cout << "Stack Created Successfully" << endl;
    while (1)
    {
        cout << "Choose the operation to perform :-" << endl;
        cout << "1. Push \n2. Pop \n3. Peek \n4. Stack Top \n5. Is Stack Empty \n6. Is Stack Full" << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            pushInStack(&st);
        break;

        case 2:
            popFromStack(&st);
        break;

        case 3:
            displayStack(st);
        break;

        case 4:
            topOfStack();
        break;

        default:
            cout << "Wrong Input " << endl;
        break;
        }
        // pushInStack(&st);
        // pushInStack(&st);
        // pushInStack(&st);
        // cout<<"Elements in Stack :-"<<endl;
        // displayStack(st);
    }
    return 0;
}
