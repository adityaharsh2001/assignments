# include<bits/stdc++.h>
using namespace std;

int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int x,q,r,n,count=0,number=0,z,p;

cin>>x;
p=x;
n=abs(x);
while(z!=0){
    z=p/10;
    p=z;
    count=count+1;

}
while(q!=0){
    q=x/10;
    r=x%10;
    x=q;
    number=number+(r*pow(10,count));
    --count;
   }
if(x<0){
 cout<<(number*(-1))/10<<"\n";
}
else{
   
    cout<<number/10<<"\n";
}

return 0;
}