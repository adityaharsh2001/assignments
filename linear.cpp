#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10], i, num, index = -1;

    cout << "Enter Array";
    for (i = 0; i < 10; i++)
        cin >> arr[i];

    cout << " Enter num to search";
    cin >> num;
    for (i = 0; i < 10; i++)
    {
        if (arr[i] == num)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        cout << "Not Found";
    }
    else
    {

        cout << "\nFound at Index No." << index;
    }
    return 0;
}