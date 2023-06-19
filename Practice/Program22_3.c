/* 22_3 -> write a program which accept string from user and
 return difference between frequency of small characters and frequency
 of capital characters.

*/

#include <stdio.h>

int Difference(char *str)
{
    int iSmall = 0;
    int iLarge = 0;

    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            iLarge++;
        }
        else if ((*str >= 'a') && (*str <= 'z'))
        {

            iSmall++;
        }
        str++;
    }

    return (iSmall - iLarge);
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s", Arr);

    iRet = Difference(Arr);

    printf("Frequency is : %d", iRet);

    return 0;
}
