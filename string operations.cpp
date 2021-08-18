#include<bits/stdc++.h>

    using namespace std;

    int main()
    {
        int i, j, temp;
        string str;

        cout << "Enter the string\n";
        getline(cin, str);

        cout << "Enter the substring to search\n";
        string substr;
        getline(cin, substr);
        for (i = 0; str[i] != '\0'; i++)
        {
            j = 0;
            if (str[i] == substr[j])
            {
                temp = i;
                while (str[i] == substr[j])
                {
                    i++;
                    j++;
                }

                if (substr[j] == '\0')
                {
                    cout << "The substring is present in given string at position " << temp << "\n";
                    string replace;
                    cout << "Enter the string to replace of same size ";
                    getline(cin, replace);
                    int len_sub = 0, len_replace = 0;
                    while(substr[len_sub]!='\0'){
                        len_sub++;
                    }

                    while (replace[len_replace]!='\0')
                    {
                        len_replace++;
                    }
                    if (len_replace==len_sub) {
                    
                    for (int i = 0; i < replace[i]!='\0'; i++)
                    {
                        str[temp]=replace[i];
                        temp++;
                    }
                    cout<<"\nNew String "<<str;
                    }
                    else {
                        cout<<"String to replaced is not of same size";
                    }
                    break;
                }
                else
                {
                    i = temp;
                    temp = 0;
                }
            }
        }

        if (temp == 0)
            cout << "The substring is not present in given string\n";

        return 0;
    }