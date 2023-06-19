// 20_2 - Accept character from user and check whether it is Capital or not
            //(A-Z)

#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckCapital(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : \n");
    scanf("%c", &cValue);

    bRet = CheckCapital(cValue);

    if (bRet == TRUE)
    {
        printf("It is a Capital Character \n ");
    }
    else
    {
        printf("It is not a Capital Character \n ");
    }

    return 0;
}