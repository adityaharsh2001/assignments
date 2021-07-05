
#include <iostream>
using namespace std;
int main()
{
    int n, r, sum = 0, temp;
    cout << "Enter a five digit Number = ";
    cin >> n;
    temp = n;
    while (n)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (temp == sum)
        cout << "Reverse is Eqaual\n";
    else
        cout << "Reverse is NOT Eqaual\n";
    return 0;
}