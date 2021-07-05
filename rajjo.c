#include <stdio.h>
int main()
{
    char ra1[5];
    int ra2;
    printf("Enter the encrypted code");
    scanf("%s", &ra1);
    printf("Enter the number of cities");
    scanf("%d", &ra2);
    char ra3[100];
    char ra12[100];

    for (int x = 0; x < ra2; x++)
    {
        int ra4 = 0, ra5 = 0, ra6 = 0, ra7 = 0, ra8 = 0;
        printf("Enter a city name : ");
        getchar();
        fgets(ra3, 100, stdin);

        int i = 0;
        while (ra3[i] != '\0')
        {
            switch (ra3[i])
            {
            case 'a':
                ra4++;
                break;
            case 'A':
                ra4++;
                break;
            case 'e':
                ra5++;
                break;
            case 'E':
                ra5++;
                break;
            case 'i':
                ra6++;
                break;
            case 'I':
                ra6++;
                break;
            case 'o':
                ra7++;
                break;
            case 'O':
                ra7++;
                break;
            case 'u':
                ra8++;
                break;
            case 'U':
                ra8++;
                break;
            }
            i++;
        }
        if ((ra1[0] = ra4) && (ra1[1] = ra5) && (ra1[2] = ra6) && (ra1[3] = ra7) && (ra1[4] = ra8))
            for (int ra13 = 0; ra3[ra13] < i; ra13++)
            {
                ra12[ra13] = ra3[ra13];
            }
    }
    printf("Target city is: %s", ra12);
    return 0;
}