#include <stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iResult = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iResult = iResult * iCnt;
    }
    return iResult;
}

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);
    printf("Factorial of number is %d", iRet);

    return 0;
}