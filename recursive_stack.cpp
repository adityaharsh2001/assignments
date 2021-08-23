    #include<bits/stdc++.h>
    #include<iostream>
    using namespace std;
    int stk[100]; 
    int s = 100; 
    int head = 0; 
    void push(int x){
        if(head==s){    

            cout<<"OverFlow \n";
        }
        else{
            ++head;
            stk[head] = x;
        }
    }
    int top(){
        if(head==0){
            cout<<"UnderFlow \n";
            return 0;
        }
        else{
            return stk[head];
        }
    }void pop(){
            
        if(head==0){
            cout<<"UnderFlow \n";
        }
        else{
            --head;
        }
    }
    int isempty(){
        if(head==-1)
            return 1;
        else
            return 0;
    }

    int fact(int n){

        if (n == 0)
            return 1;
            else
            
            push(top() * n);
            return fact(n-1);

    }
    int main() {
        int n;
        cout<<"Enter a Number \n";
        scanf("%d", &n);
        push(1);
        fact(n);
        cout<<"Factorial "<<top()<<"\n";
        return 0;
    }
