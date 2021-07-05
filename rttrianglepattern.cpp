#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
        ll n,q;
    cin>>n>>q;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(ll i=0;i<q;i++){
        ll x;
        cin>>x;
        ll index=lower_bound(a,a+n,x)-a;
        if(index<n && a[index]==x)
            cout<<0<<endl;
        else if(index%2==0)
            cout<<"POSITIVE"<<endl;
        else
            cout<<"NEGATIVE"<<endl;

    }
}