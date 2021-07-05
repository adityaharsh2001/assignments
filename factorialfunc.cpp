#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the number to find factorial" << endl;
    void factorial();
    factorial();
    return 0;
}
void factorial()
{
    int fact = 1, n, i;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial of " << n << " is: " << fact;
}