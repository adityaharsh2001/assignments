    #include <bits/stdc++.h>
    using namespace std;
    struct Node
    {
        int data;
        struct Node *next;
    };
    struct Node *head = NULL;
    void InsertBeg(int x)
    {
        struct Node *newNode = new Node();
        if (!newNode)
        {
            cout << "Memory Error!!\n";
            return;
        }
        newNode->data = x;
        newNode->next = newNode;
        if (head == NULL)
            head = newNode;
        else
        {
            struct Node *temp = head;
            while ((temp->next) != head)
                temp = temp->next;
            newNode->next = head;
            temp->next = newNode;
            head = newNode;
        }
    }
    void InsertEnd(int x)
    {
        struct Node *newNode = new Node();
        if (!newNode)
        {
            cout << "Memory Error!!\n";
            return;
        }
        newNode->data = x;
        newNode->next = newNode;
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            struct Node *temp = head;
            while (temp->next != head)
                temp = temp->next;
            newNode->next = head;
            temp->next = newNode;
        }
    }
    void InsertPos(int pos, int x)
    {
        struct Node *newNode = new Node();
        if (!newNode)
        {
            cout << "Memory Error!!\n";
            return;
        }
        newNode->data = x;
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            int k = 0;
            struct Node *p = head, *q;
            while (k < pos && (p->next) != head)
            {
                k++;
                q = p;
                p = p->next;
            }
            if (k != pos)
            {
                cout << "Desired position does not exist!!\n";
                return;
            }
            else
            {
                newNode->next = p;
                q->next = newNode;
            }
        }
    }
    void DeleteBeg()
    {
        if (head == NULL)
        {
            cout << "Empty List!!\n";
            return;
        }
        struct Node *temp = head;
        struct Node *temp2 = head;
        while (temp->next != head)
            temp = temp->next;
        temp->next = head->next;
        head = head->next;
        delete (temp2);
    }
    void DeleteEnd()
    {
        if (head == NULL)
        {
            cout << "Empty List!!\n";
            return;
        }
        struct Node *p = head, *q;
        while (p->next != head)
        {
            q = p;
            p = p->next;
        }
        q->next = head;
        free(p);
    }
    void DeletePos(int pos)
    {
        if (head == NULL)
        {
            cout << "Empty List!!\n";
            return;
        }
        struct Node *p = head, *q;
        int k = 0;
        while (k < pos && (p->next) != head)
        {
            k++;
            q = p;
            p = p->next;
        }
        if (k != pos)
        {
            cout << "Desired position does not exist!!\n";
            return;
        }
        q->next = p->next;
        delete (p);
    }
    void Print()
    {
        struct Node *p = head;
        if (head == NULL)
            return;
        do
        {
            cout << p->data << " ";
            p = p->next;
        } while (p != head);
        cout << "\n";
    }
    int main()
    {
        cout << "\nEnter Your Choice\n";
        cout << " 1.InsertBeg \n 2. InsertEnd \n 3. InsertPos \n 4. DeleteBeg \n 5. DeleteEnd \n 6. DeletePos \n 7. Print \n 8. Exit\n";

        do
        {
            int choice;

            cin >> choice;
            int x, i;
            switch (choice)
            {
            case 1:
                cout << "\nEnter The Element to Insert ";
                cin >> x;
                InsertBeg(x);
                break;
            case 2:
                cout << "\nEnter The Element to Insert ";
                cin >> x;
                InsertEnd(x);
                break;
            case 3:
                cout << "\nEnter The Element to Insert ";
                cin >> x;
                cout << "\nEnter The Position to Insert ";
                cin >> i;
                InsertPos(i, x);
                break;
            case 4:
                DeleteBeg();
                break;
            case 5:
                DeleteEnd();
                break;
            case 6:
                cout << "\nEnter The Position to delete ";
                cin >> i;
                DeletePos(i);
                break;
            case 7:
                Print();
                break;
            case 8:
                return 0;
                break;
            default:
                cout << "Wrong Choice";
            }
        } while (true);
    }