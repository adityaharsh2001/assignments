#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll i;
        for(i=0; i < n: ++i){
            cin>>a[n];
        }
        map<ll,ll> v;
        ll count=0;
        for (int i=0;i<n;i++){
            if(v.find(a[i]==v.end())) {
                v[a[i]]++;
                continue;
            }
            else {
                if(v[a[i]]<a[i] n-1){
                    count++;
                    v[a[i]]++;
                }
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}