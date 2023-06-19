// 16_2 - Accept number of rows and number of columns from user and display below pattern.

// Input : iRow=4   iCol=4

// Output : A  B  C  D
//          a  b  c  d
//          A  B  C  D
//          a  b  c  d

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch1 = '\0';
    char ch2 = '\0';

    for (i = 1; i <= iRow; i++)
    {
        if ((i % 2) != 0)
        {
            for (j = 1, ch1 = 'A'; j <= iCol; j++, ch1++)
            {
                printf("%c\t", ch1);
            }
        }
        else
        {
            for (j = 1, ch2 = 'a'; j <= iCol; j++, ch2++)
            {
                printf("%c\t", ch2);
            }
        }

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