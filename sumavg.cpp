
    #include<iostream>
    using namespace std;
    int main(){
        int n, sum=0, avg;
        int i=10;
        
        cout<<"Enter 10 numbers : ";
        while(i--)
        {
            cin>>n;
            sum+=n;
        }
        cout<<"\nsum = "<<sum;
        cout<<"\naverage = "<<sum/10;
    }