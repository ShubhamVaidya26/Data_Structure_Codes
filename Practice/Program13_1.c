/*Design application for hotel. According to the management team of hotel they are giving discount on total bill amount of customer.
If bill ammount is less than 500 then there is no discount , if bill ammount is less than 1500 and more than 500 they give 10% discount. 
And if the bill amount is more than 1500 then they give 15% discount.
Our application should accept total bill amount and depends on the discount policy we have to return the amount after applying discount.

Input : 1200           Output : 1080
Input : 290            Output : 290
Input : 3700           Output : 3145

*/

#include<stdio.h>

float CalculateBill(int iAmount)
{
    float fNo = 0.0f;

    if(iAmount <= 500)
    {
        return iAmount;
    }
    else if((iAmount > 500) && (iAmount <= 1500))
    {
       //printf("inside if\n");
       fNo = iAmount * 10;
       fNo = fNo / 100;
       //printf("%f\n",fNo);
       return iAmount - fNo;
    }
    else
    {
        fNo = iAmount * 15;
        fNo = fNo / 100;

        return iAmount - fNo;
    }
}

int main()
{
    int iValue = 0; 
    float fRet = 0.0f;

    printf("Enter the total bill ammount :\n");
    scanf("%d",&iValue);

    fRet = CalculateBill(iValue);

    printf("Your bill ammount is :%f",fRet);

    return 0;
}