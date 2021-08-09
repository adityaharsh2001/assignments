#include <bits/stdc++.h>

class student {
    public:
    char string[50][10];
};
int main()
{

    student s;

    for (int x = 0; x < 50; x++)
    {
        printf("Enter The Student Name - %d ", (x + 1));
        scanf("%s", &s.string[x][0]);
    }

    for (int x = 0; x < 50; x++)
    {
        printf("Student %d - %s \n", (x + 1), s.string[x]);
    }
}
