#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Size ";
    cin >> n;
    cout<<"Enter Array ";
    int arr[n];
    int i;
    for (i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int pos;
    cout<<"Enter Position ";
    cin >> pos;
    cout<< "Enter element ";
    int ele;
    cin >> ele;
    if (pos > n)
        cout<<"Error ";
    else
    {
        for (i = n-1; i >= pos-1; i--)
            arr[i + 1] = arr[i];

        arr[pos - 1] = ele;

        cout << "Array:\n";

        for (i = 0; i <= n; i++)
            cout << arr[i] << " ";
    }
    return 0;
}