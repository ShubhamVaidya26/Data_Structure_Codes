#include <stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iResult = 0;

    if ((iNo1 == 0) || (iNo2 == 0) || (iNo3 == 0))
    {
        printf("Invalid Number\n");
        return 0;
    }

    iResult = iNo1 * iNo2 * iNo3;
    return iResult;
}

int main()
{

    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    printf("Enter first number:\n");
    scanf("%d", &iValue1);
    printf("Enter second number:\n");
    scanf("%d", &iValue2);
    printf("Enter third number:\n");
    scanf("%d", &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is:%d", iRet);

    return 0;
}