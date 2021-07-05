#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll a,b;
    cin>>a>>b;
    while(b%2==0)
        b/=2;
    if(b==1)
        cout<<"Yes \n";
    else
        cout<<"No \n";
}


int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
}