/* 22_5 -> write a program which accept string from user and
 dislay its reverse order

*/

#include <stdio.h>

void Reverse(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        str++;
        iCount++;
    }
    str--;

    while (iCount != 0)
    {
        printf("%c", *str);
        str--;

        iCount--;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string :\n");
    scanf("%[^'\n']s", Arr);

    Reverse(Arr);

    return 0;
}
