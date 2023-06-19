#include <stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iResult = 0;
    int iSum = 0;
    int iDiff = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0)
        {

            iResult = iResult + iCnt;
        }
    }
    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {

            iSum = iSum + iCnt;
        }
    }
    iDiff = iSum - iResult;
    return iDiff;
}

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("enter number :\n");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);
    printf("Difference is :%d\n", iRet);

    return 0;
}