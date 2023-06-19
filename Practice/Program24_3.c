/* 24_3 -> write a program which accept string from user and
 accept one character .
 Return index of first occurence of that character.


*/

#include <stdio.h>

int FirstChar(char *str, char ch)
{
    int iCnt = 0;
    int iPos = -1;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            iPos = iCnt;
            break;
        }
        str++;
        iCnt++;
    }
    return iPos;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character :\n");
    scanf(" %c", &cValue);

    iRet = FirstChar(Arr, cValue);

    printf("Character location is :%d", iRet);

    return 0;
}
