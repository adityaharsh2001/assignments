#include <iostream>

using namespace std;
struct Node{
int data;
Node *next;

};

class stack{
    struct Node* top;
public:
    stack(){
        top=NULL;
    }
    void push(){
        int value;
        Node* ptr;
        cout<<"\n Enter the no.. ";
        cin>>value;
        ptr=new Node;
        ptr->data=value;
        ptr->next=NULL;
        if(top!=NULL)
            ptr->next=top;
        top=ptr;
    }
    void pop(){
        Node* temp;
        if(top == NULL){
            cout<<"\n Empty stack";
            return;
        }
        temp= top;
        top=top->next;
        cout<<"\n popped element is "<<temp->data;
        delete temp;
    }
    void print(){
        Node* temp1=top;
        cout<<"\n The stack is ";
        while (temp1!=NULL){
            cout<<temp1->data<<" ";
            temp1=temp1->next;
        }
        cout<<"\n";
    }
};

int main() {
    stack s;
    int n;
    do {

        cout<<"\n 1. PUSH \n 2. POP \n 3. Print \n 4. Exit\n";
        int choice;
        cin>>choice;
        switch(choice){
            case 1: s.push();
                    s.print();
                    break;
            case 2: s.pop();
                    break;
            case 3: s.print();
                    break;
            case 4: return 0;
                    break;
            default: cout<<"\nWrong Choice"; 
        }
    } while(true);
    return 0;
}