
#include <bits/stdc++.h>
using namespace std;

void clac(int n)
{
    int a[32];
    int i = 0;
    while (n > 0)
    {
        a[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << a[j];
}
int main()
{
    int n;
    cout<<"Enter a binary number \n";
    cin>>n;
    clac(n);
    return 0;
}