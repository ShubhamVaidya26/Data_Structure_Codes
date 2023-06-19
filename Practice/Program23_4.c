/* 23_4 -> write a program which accept string from user and
 display only digits from that string


*/

#include <stdio.h>

void DisplayDigits(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= '0') && (*str <= '9'))
        {
            printf("%c", *str);
        }

        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string :\n");
    scanf("%[^'\n']s", Arr);

    DisplayDigits(Arr);

    return 0;
}
