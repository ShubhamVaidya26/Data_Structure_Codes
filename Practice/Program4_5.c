#include <stdio.h>

float Percentage(float iTotal, float iObtained)
{
    float fResult = 0.0;

    fResult = (iObtained * 100) / iTotal;
    return fResult;
}

int main()
{

    float iValue1 = 0.0;
    float iValue2 = 0.0;

    float fRet = 0.0;

    printf("Enter Total marks:\n");
    scanf("%d", &iValue1);
    printf("Enter Marks Obtained:\n");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is:%f", fRet);

    return 0;
}