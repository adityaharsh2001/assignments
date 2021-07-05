#include <stdio.h>

int main()
{
    int ra1, ra2, ra3, ra4, ra5[10][10], ra6[10][10], ra7[10][10], ra9, ra10, ra13[10][10], ra14 = 0;

    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d%d", &ra1, &ra2);
    printf("Enter the elements of first matrix\n");

    for (ra3 = 0; ra3 < ra1; ra3++)
        for (ra4 = 0; ra4 < ra2; ra4++)
            scanf("%d", &ra5[ra3][ra4]);
    int ra8;
    printf("1. for addion 2. multilpy");
    scanf("%d", &ra8);
    switch (ra8)
    {
    case 1:
        printf("Enter the elements of second matrix\n");

        for (ra3 = 0; ra3 < ra1; ra3++)
            for (ra4 = 0; ra4 < ra2; ra4++)
                scanf("%d", &ra6[ra3][ra4]);
        printf("Sum of entered matrices:-\n");

        for (ra3 = 0; ra3 < ra1; ra3++)
        {
            for (ra4 = 0; ra4 < ra2; ra4++)
            {
                ra7[ra3][ra4] = ra5[ra3][ra4] + ra6[ra3][ra4];
                printf("%d\t", ra7[ra3][ra4]);
            }
            printf("\n");
        }
        break;
    case 2:

        printf("Enter number of rows and columns of second matrix\n");
        scanf("%d%d", &ra9, &ra10);

        if (ra2 != ra10)
            printf("The multiplication isn't possible.\n");
        else
        {
            printf("Enter elements of second matrix\n");

            for (int ra15 = 0; ra15 < ra9; ra15++)
                for (int ra16 = 0; ra16 < ra10; ra16++)
                    scanf("%d", &ra6[ra15][ra16]);

            for (int ra15 = 0; ra15 < ra1; ra15++)
            {
                for (int ra16 = 0; ra16 < ra10; ra16++)
                {
                    for (int ra18 = 0; ra18 < ra10; ra18++)
                    {
                        ra14 = ra14 + ra5[ra15][ra18] * ra6[ra15][ra16];
                    }

                    ra13[ra15][ra16] = ra14;
                    ra14 = 0;
                }
            }

            printf("Product of the matrices:\n");

            for (int ra15 = 0; ra15 < ra9; ra15++)
            {
                for (int ra16 = 0; ra16 < ra10; ra16++)
                    printf("%d\t", ra13[ra15][ra16]);

                printf("\n");
            }
        }
        break;
    default:
        break;
    }

    return 0;
}