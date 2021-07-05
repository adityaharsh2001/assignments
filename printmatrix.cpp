    
    #include<iostream>
    using namespace std;
    int main()
    {
        int a[3][3];
        cout << " enter the matrix : ";
        for (int i=0;i<3;i++){
            for(int j=0; j<3; j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<" OUTPUT : ";
        for (int i=0;i<3;i++){
            cout<<"\n";
            for(int j=0; j<3; j++)
            {
                cout<<a[i][j]<<" ";
            }
        }
    } 

