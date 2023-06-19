// 14_2 - Accept number from user and display below pattern

// Input : 5
// Output : 5 # 4 # 3 # 2 # 1 #

#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for (iCnt = iNo; iCnt > 0; iCnt--)
    {
        printf("%d\t#\t", iCnt);
    }
}

int main()
{
    int iFrequency = 0;

    printf("Enter number of elements :\n");
    scanf("%d", &iFrequency);

    Pattern(iFrequency);

    return 0;
}