/* 22_4 -> write a program which accept string from user and
 check whether it contains vowels in it or not.

*/

#include <stdio.h>
#include <stdbool.h>

bool CheckVowels(char *str)
{
    bool bFlag = false;

    while (*str != '\0')
    {
        if ((*str == 'a') || (*str == 'i') || (*str == 'e') || (*str == 'u') || (*str == 'o'))
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
    bool bRet = false;

    printf("Enter string :\n");
    scanf("%[^'\n']s", Arr);

    bRet = CheckVowels(Arr);

    if (bRet == true)
    {
        printf("Contains Vowels \n");
    }
    else
    {
        printf("There is no Vowels \n");
    }

    return 0;
}
