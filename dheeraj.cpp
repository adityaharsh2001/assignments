#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;

    node(int data)
    {

        this->data = data;
        next = NULL;
    }
} *top = NULL;

void push(int x)
{
    struct node *t;
    t = new node(x);
    t->data = x;
    t->next = top;
    top = t;
}

int pop()
{
    struct node *t;
    int x = -1;

    if (top == NULL)
        cout << "\nStack is Empty";
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        cout << "The data deleted is : " << x;
        free(t);
    }
    return x;
}

void display()
{
    struct node *p;
    p = top;
    cout << "Stack elements :\n";
    while (p != NULL)
    {
        cout << "                " << p->data << "\n";
        p = p->next;
    }
    cout << endl;
}
void peek()
{
    if (top == NULL)
    {
        cout << "\nStack is Empty";
        return;
    }
    struct node *p;
    p = top;
    cout << "\nThe topmost element is : " << p->data;
    cout << endl;
}

void search(int x)
{
    if (top == NULL)
    {
        cout << "\n!Stack is Empty! searching is not possible ";
        return;
    }
    node *t = top;
    int count = 0;
    while (t != NULL)
    {
        if (t->data == x)
        {
            cout << "\nThe searched element is found in the stack at index : " << count;
            return;
        }
        t = t->next;
        count++;
    }
    cout << "\nThis element does not exist in the stack ";
}

int main()
{
    int opt, n, x, y;
    do
    {
        cout << "\n ======== Operations ======== \n1= Push Operation \n2= POP Operation \n3= Display the stack \n4= PEEK Operation \n5= Search a element \n6= Exit ";
        cout << "\nWhich operation do you want to perform : ";
        cin >> opt;
        switch (opt)
        {
        case 1:
            cout << "\nEnter the element that you want to insert in the stack : ";
            cin >> x;
            push(x);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            cout << "\nEnter the element that you want to search : ";
            cin >> y;
            search(y);
            break;
        case 6:
            return 0;
        default:
            cout << "\ninvalid choice \n";
            break;
        }

    } while (opt != 5);
    return 0;
}