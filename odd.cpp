#include<iostream>
using namespace std;
int main(){
    int s,e,sum=0;
    cout<<"Enter a range start index and end index respectively : ";
    cin>>s>>e;
    for(int i=s;i<=e;i++)
    {
        if(i%2!=0)
        sum+=i;
    }
        cout<<"\nsum = "<< sum<<"\n";
}