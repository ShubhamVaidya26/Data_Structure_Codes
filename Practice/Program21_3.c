/* 21_3 -> Accept character from user.If it is capital then display all the
characters from the input till Z.if input character is small
then print all the characters in reverse order till a.In other cases return directly.

*/

#include <stdio.h>

void Display(char ch)
{
    char ch1 = ch;
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        for (ch1 = ch; ch <= 'Z'; ch++)
        {
            printf("%c\t", ch);
        }
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        for (ch1 = ch; ch >= 'a'; ch--)
        {
            printf("%c\t", ch);
        }
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character :\n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}
