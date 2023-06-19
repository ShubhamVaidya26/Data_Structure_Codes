/* 18_5 - Accept number of rows and number of columns from user and display below pattern.

 Input : iRow=4   iCol=4

 Output :  1   2   3    4
           1   *   *    4
           1   *   *    4
           1   2   3    4
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

    for (i = 1; i <= iRow; i++)
    {

        for (j = 1; j <= iCol; j++)
        {
            if ((i == 1) || (i == iRow))
            {
                printf("%d\t", j);
            }
            else if ((j == 1) || (j == iCol))
            {
                printf("%d\t", j);
            }

            else
            {
                printf("*\t");
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