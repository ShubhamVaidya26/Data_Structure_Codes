/* 25_4 - Accept number of rows and number of columns from user and display below pattern.

 Input : iRow=6   iCol=6

 Output :   *       *       *       *       *       *

            *       #       #       #       *       *

            *       #       #       *       $       *

            *       #       *       $       $       *

            *       *       $       $       $       *

            *       *       *       *       *       *

*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    if (iRow != iCol)
    {
        printf("Invalid input");
        return;
    }

    for (i = iRow; i >= 1; i--)
    {

        for (j = 1; j <= iCol; j++)
        {
            if ((i == j) || (i == 1) || (i == iRow) || (j == 1) || (j == iCol))
            {
                printf("*\t");
            }
            else if (i < j)
            {
                printf("$\t");
            }
            else if (i > j)
            {
                printf("#\t");
            }

            else
            {
                printf(" \t");
            }
        }

        printf("\n");
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of Rows :\n");
    scanf("%d", &iValue1);
    printf("Enter number of Columns :\n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}