#include<iostream>
using namespace std;

int main() {

    char str1[100], str2[100];
    int i = 0, j = 0;

    cout << "Enter first string:";
    cin.getline(str1, 100);

    cout << "Enter second string:";
    cin.getline(str2, 100);

    while (str1[i] != '\0') {
        i++;
    }

    while (str2[j] != '\0') {
        str1[i] = str2[j];
        j++;
        i++;
    }
    str1[i] = '\0';

    cout << "Concatenated string:" << str1;

    return 0;
}