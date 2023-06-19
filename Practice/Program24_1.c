/* 24_1 -> write a program which accept string from user and
 accept one character .
 Check whether that character is present in string or not


*/

#include <stdio.h>
#include <stdbool.h>

bool CheckChar(char *str, char ch)
{
    bool bFlag = false;
    while ((*str != '\0'))
    {
        if (*str == ch)
        {
            bFlag = true;
            break;
        }

        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    bool bRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character :\n");
    scanf(" %c", &cValue);

    bRet = CheckChar(Arr, cValue);

    if (bRet == true)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}
