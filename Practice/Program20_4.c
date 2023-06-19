// 20_4 - Accept character from user and check whether it is small case or not
//(a-z)

#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckSmall(char ch)
{
    if ((ch >= 'a') && (ch <= 'z'))
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

    bRet = CheckSmall(cValue);

    if (bRet == TRUE)
    {
        printf("It is a small case Character \n ");
    }
    else
    {
        printf("It is not a small case Character \n ");
    }

    return 0;
}