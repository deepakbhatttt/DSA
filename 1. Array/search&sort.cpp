#include <iostream>
using namespace std;
#define MAX 100

void input(int *, int);
void Display(int *, int);
void insert(int *, int *, int, int); // Insertion(Append)
void del(int *, int *, int);         // Deletion
void bin_search(int *arr, int key, int size);
void selsrt(int *, int *); // Selection Sort
void quit(void);

int main()
{
    int arr[MAX], length, item, position, inp;
    cout << "Enter the length of Array :-  ";
    cin >> length;

    while (1)
    {
        cout << "Please Select The Option :- " << endl;
        cout << "1. Input Array " << endl;
        cout << "2. Display " << endl;
        cout << "3. Insert Element " << endl;
        cout << "4. Delete Element " << endl;
        cout << "5. Search Element " << endl;
        cout << "6. Sort Elements " << endl;
        cout << "0. Exit " << endl;
        cin >> inp;

        switch (inp)
        {
            case 1:
                input(arr, length);
                break;

            case 2:
                Display(arr, length);
                break;

            case 3:
                cout << "Enter the element to be inserted :-  ";
                cin >> item;
                cout << "Enter the position :-  ";
                cin >> position;
                insert(arr, &length, item, position);
                break;

            case 4:
                cout << "Enter the position of the element to be deleted :-  ";
                cin >> position;
                del(arr, &length, position);
                break;

            case 5:
                int s,key;
                cout << "Enter the Element to Search" << endl;
                cin >> key;
                cout << "Select which search do you want :- ";
                cout << "1.Binary Searcht " << endl;
                cin >> s;
                    switch (s)
                    {
                    case 1:
                        bin_search(arr, key, sizeof(arr));
                        break;
                    default:
                        cout << "Enter The correct option" << endl;
                        break;
                    }
            case 6:
                int s;
                cout << "Select which sort do you want :- ";
                cout << "1.Selection Sort " << endl;
                cin >> s;
                switch (s)
                {
                case 1:
                    selsrt(arr, &length);
                    break;

                default:
                    cout << "Enter The correct option" << endl;
                    break;
                }
                break;

            case 0:
                quit();
                break;

            default:
                cout << "Kindly Enter The Correct Option" << endl;
                break;
        }
    }
    return 0;
}

void input(int *arr, int len)
{
    cout << "Kindly Enter " << len << " Elements " << endl;
    for (int i = 0; i < len; i++)
        cin >> arr[i];
}

void Display(int *arr, int len)
{
    cout << "All Elements  :------  " << endl;
    for (int i = 0; i < len; i++)
        cout << arr[i] << ",";
    cout << "\n";
}

void insert(int *arr, int *len, int item, int pos) // Insertion(Append)
{
    --pos;
    for (int i = *len; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
        if (i == pos)
            arr[i] = item;
    }
    // arr[pos-1]=item;
    *len = *len + 1;
}

void del(int *arr, int *len, int pos) // Deletion
{
    for (int i = pos - 1; i < *len; i++)
    {
        arr[i] = arr[i + 1];
    }
    *len = *len - 1;
}

void bin_search(int *arr, int key, int size) // Binary Search
{
    for (int i = 0; i <= size; i++)
    {
        if (arr[i] == key)
            cout << "Found at index" << i << endl;
    }
}

void selsrt(int *arr, int *len) // Selection Sort
{
    int temp;
    for (int i = 0; i < *len; i++)
    {
        for (int j = i + 1; j < *len; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void quit(void) // Quit
{
    char q;
    cout << "Do you really want to quit\n Yes (Y/y) No (N/n)";
    cin >> q;
    if (q == 'Y' || q == 'y')
        exit(0);
}