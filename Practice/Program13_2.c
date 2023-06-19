/*Design application for income tax depertment to calculate tac amount. According to the income tox department there is no income tax for the income less than 5 lakhs.
  If income is in between 5 to 10 lakhs then there will be 10% tax.
  If income is in between 10 to 20 lakhs then there will be 20% tax.
  And if more than 20 lakhs there will be 30% tax.
  We have to accept gross income from user and return the tax amount.
  
  Input : 600000               Output : 10000     (0 + 10000)
  Input : 450000               Output : 0
  Input : 1200000              Output : 90000     (0 + 50000 + 40000)
  Input : 8200000              Output : 2110000   (0 + 50000 + 200000 + 1860000)
  
*/

#include<stdio.h>

float IncomeTax(int iAmount)
{
    float fNo = 0.0f;
    float fNo1 = 0.0f;
    float fNo2 = 0.0f;

    if(iAmount <= 500000)
    {
        // printf("Inside if\n");
        return 0.0f;
    }
    else if((iAmount > 500000) && (iAmount <= 1000000))
    {
        fNo = iAmount - 500000;
        fNo = fNo * 10;
        fNo = fNo / 100;
        return fNo;
    }
    else if((iAmount > 1000000) && (iAmount <= 2000000))
    {
        fNo = iAmount -1000000;
        //printf("%f\n",fNo);

        fNo1 = 500000  * 10;
        fNo1 = fNo1 / 100;
        //printf("%f\n",fNo1);

        fNo = fNo * 20;
        fNo = fNo / 100;
        //printf("%f\n",fNo);

        return fNo + fNo1;
    }
    else
    {
        fNo = iAmount - 2000000;
        //printf("%f\n",fNo);

        fNo1 = 500000 * 10;
        fNo1 = fNo1 / 100;

        fNo2 = 1000000 * 20;
        fNo2 = fNo2 / 100;

        fNo = fNo * 30;
        fNo = fNo / 100;
        //printf("%f\n",fNo);
        return fNo1 + fNo2 + fNo;
    }
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter the income\n");
    scanf("%d",&iValue);

    fRet = IncomeTax(iValue);

    printf("The payabel tax ammount is : %f",fRet);

    return 0;
}