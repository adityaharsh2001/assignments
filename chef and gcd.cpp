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
        int x,y;
        cin>>x>>y;
        int res=0;
        if (__gcd(x,y)>1) {
            res=0;
        }
        else if((__gcd(x+1,y)>1) || (__gcd(x,y+1)>1)){
            res=1;
        }
         else {
         res=2;
         }
        
        cout<<res<<"\n";
    }
    return 0;
}