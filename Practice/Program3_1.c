#include <stdio.h>

int MultFactorial(int iNo)
{
    int iCnt = 0;
    int iResult = 1;

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {

            iResult = iResult * iCnt;
        }
    }
    return iResult;
}

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("enter number :\n");
    scanf("%d", &iValue);

    iRet = MultFactorial(iValue);
    printf("Multiplication of Factors is :%d", iRet);

    return 0;
}