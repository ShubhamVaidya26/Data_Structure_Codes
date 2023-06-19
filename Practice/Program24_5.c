/* 24_5 -> write a program which accept stringfrom user
reverse that string in place


*/

#include <stdio.h>

void StrRevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while (*end != 0)
    {
        end++;
    }
    end--;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the string :\n");
    scanf("%[^'\n']s", Arr);

    StrRevX(Arr);

    printf("Modified string is : %s", Arr);

    return 0;
}
