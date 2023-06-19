/* 22_1 -> write a program which accept string from user and
 count number of capital characters.

*/

#include <stdio.h>

int CountCapital(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
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
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s", Arr);

    iRet = CountCapital(Arr);

    printf("Number of capital characters are : %d", iRet);

    return 0;
}
