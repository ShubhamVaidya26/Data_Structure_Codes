#include <stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iResult = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0)
        {
            iResult = iResult + iCnt;
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

    iRet = SumNonFact(iValue);
    printf("Summation of all Non-Factors is :%d\n", iRet);

    return 0;
}