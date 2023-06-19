#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEven(int iNo)
{

    if (iNo < 0) // Updater
    {
        iNo = -iNo;
    }
    if ((iNo % 2) == 0)
    {
        printf("The number is Even\n");
    }

    else
    {
        printf("The number is Odd\n");
    }
}
int main()
{

    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Enter number :\n");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);

    // Display result

    return 0;
}