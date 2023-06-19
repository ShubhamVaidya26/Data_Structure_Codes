#include <stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 10; iCnt > 0; iCnt--)
    {
        printf("%d\t", iNo * iCnt);
    }
}

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}