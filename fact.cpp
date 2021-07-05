
    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;


    ll factorial(ll n)
    {
        long fact = 1;
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        return fact;
    }

    int main()
    {

        int n;

        cout << "Enter the Number :";
        cin >> n;

        cout << n << " Factorial Value Is " << factorial(n);

        return 0;
    }