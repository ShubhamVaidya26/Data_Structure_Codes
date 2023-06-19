#include <stdio.h>

int DisplayFactors(int iNo)
{
    int iCnt = 0;
    int iResult = 1;

    for (iCnt = (iNo / 2); iCnt >= 0; iCnt--)
    {
        if ((iNo % iCnt) == 0)
        {

            printf("%d\t", iCnt);
        }
    }
}

int main()
{

    int iValue = 0;

    printf("enter number :\n");
    scanf("%d", &iValue);

    DisplayFactors(iValue);

    return 0;
}