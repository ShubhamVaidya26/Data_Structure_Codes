/* 21_2 -> Accept character from user.If character is small display its
corresponding capital character,and if it is small then display its
corresponding capital.In other cases display as it is.

*/

#include <stdio.h>

void Display(char ch)
{
    if ((ch >= 'a') && (ch <= 'z'))
    {
        ch = ch - 32;
        printf("Character is : %c", ch);
    }
    else
    {
        printf("Character is : %c", ch);
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
