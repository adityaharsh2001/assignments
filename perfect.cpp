    
    #include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"Enter The Number: ";
        cin>>n;
        int i = n;
        cout<<"Numbers Perfectly Dividing the given number are: ";
        while (i>0)
        {
         if (n%i==0)
         cout<<i<<" ";
         --i;
        }
    }