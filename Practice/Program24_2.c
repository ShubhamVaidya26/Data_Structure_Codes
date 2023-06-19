/* 24_2 -> write a program which accept string from user and
 accept one character .
 Return frequency of that character.


*/

#include <stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while ((*str != '\0'))
    {
        if (*str == ch)
        {
            iCount++;
        }

        str++;
    }
    return iCount;
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

    iRet = CountChar(Arr, cValue);

    printf("Frequency is :%d", iRet);

    return 0;
}
