#include <stdio.h>

int SchoolFees(int iStandard)
{
    switch (iStandard)
    {
    case 1:
        printf("First standard fees are 8900");
        break;
    case 2:
        printf("Second standard fees are 12790");
        break;
    case 3:
        printf("Third standard fees are 21000");
        break;
    case 4:
        printf("Fourth standard fees are 23450");
        break;

    default:
        printf("Wrong input");
        break;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter your Standard:");
    scanf("%d", &iValue);

    SchoolFees(iValue);

    return 0;
}