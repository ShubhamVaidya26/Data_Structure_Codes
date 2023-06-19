#include <stdio.h>

int TouristBill(int iKilometer)
{
    int iResult = 0;

    if ((iKilometer <= 100))
    {
        iResult = iKilometer * 25;
    }
    if ((iKilometer > 100))
    {
        iResult = iKilometer * 15;
    }
    return iResult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Kilometers you travelled:\n");
    scanf("%d", &iValue);

    iRet = TouristBill(iValue);

    printf("Total rent of car is : %d Rs", iRet);

    return 0;
}