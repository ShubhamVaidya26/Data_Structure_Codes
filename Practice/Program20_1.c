// 20_1 - Accept character from user and check whether it is alphabet or not
          //(A-Z ,a-z)

#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckAlpha(char ch)
{
    if (((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z')))
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : \n");
    scanf("%c", &cValue);

    bRet = CheckAlpha(cValue);

    if (bRet == TRUE)
    {
        printf("It is a Character \n ");
    }
    else
    {
        printf("It is not a Character \n ");
    }

    return 0;
}