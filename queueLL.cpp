#include <iostream>
using namespace std;

class Queue
{
public:
    int data;
    Queue *next;
};
Queue *Front = NULL, *Tail = NULL;

bool isEmpty()
{
    if (Front == NULL)
        return true;
    return false;
}

Queue *getNewNode(int n)
{
    Queue *newNode = new Queue();

    newNode->data = n;
    newNode->next = NULL;
    return newNode;
}

void Enqueue(int n)
{
    Queue *newNode = getNewNode(n);

    if (isEmpty())
    {
        Front = newNode;
        Tail = newNode;
    }
    else
    {
        Tail->next = newNode;
        Tail = Tail->next;

        /*Tail = Front;
            while(Tail->next != NULL)
                Tail = Tail->next;
            Tail -> next = newNode;*/
    }
}

void Dequeue()
{
    if (isEmpty())
    {
        cout << "Sorry! List is empty.\n";
        return;
    }

    Queue *Delete_Node = Front;
    Front = Front->next;
    delete Delete_Node;
}

void print()
{
    if (!isEmpty())
    {
        Queue *root = Front;
        while (root != NULL)
        {
            cout << root->data << "\t";
            root = root->next;
        }
        cout << "\n";
    }
}

int main()
{
    do
    {

        cout << "\n 1. ENQUEUE \n 2. DEQUEUE \n 3. Print \n 4. Exit\n";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "insert the element";
            int x;
            cin >> x;
            Enqueue(x);
            break;
        case 2:
            Dequeue();
            break;
        case 3:
            print();
            break;
        case 4:
            return 0;
            break;
        default:
            cout << "\nWrong Choice";
        }
    } while (true);
    return 0;
}