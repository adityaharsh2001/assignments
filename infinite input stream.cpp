#include <iostream>
using namespace std;
int main()
{
    int n;
    int cn = 0, cz = 0, cp = 0;
    cout << "Input the Numbers, CTRL+Z(on Windows) and CTRL+D(on linux or Mac To terminate : ";
    while (cin >> n)
    {
        if (n < 0)
            cn++;
        else if (n > 0)
            cp++;
        else
            cz++;
    }
    cout << "\nCount of +Ve numbers =  " << cp
         << "\nCount of -Ve numbers =  " << cn
         << "\nCount of zeros       =  " << cz;
}