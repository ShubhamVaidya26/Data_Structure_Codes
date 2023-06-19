#include <stdio.h>

void Accept(int iNo1)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo1; iCnt++)
    {
        printf("*\n");
    }
}

int main()
{

    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    Accept(iValue);

    return 0;
}