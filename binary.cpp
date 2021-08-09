#include <bits/stdc++.h>
using namespace std;

int main()
{

    int beg, mid, end, i, n, num;
    cout<<"Enter Size ";
    cin >> n;
    int arr[n];
    cout<<"Enter Array ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    beg = 0;
    end = n - 1;
    cout <<" \nEnter Number ";
    cin >> num;


    while (beg <= end)
    {

        mid = (beg + end) / 2;

        if (arr[mid] == num)
        {
            cout << "\nFound At " << (mid + 1);

            exit(0);
        }
        else if (num > arr[mid])
        {

            beg = mid + 1;
        }
        else if (num < arr[mid])
        {

            end = mid - 1;
        }
    }

    cout << "Not Found";
}
