#include <stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckEqual(int iNo1, int iNo2)
{
    if (iNo1 == iNo2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Enter first number :\n");
    scanf("%d", &iValue1);
    printf("Enter second number :\n");
    scanf("%d", &iValue2);

    bRet = CheckEqual(iValue1, iValue2);

    if (bRet == 1)
    {
        printf("Numbers are equal\n");
    }
    else
    {
        printf("Numbers are not equal\n");
    }

    return 0;
}