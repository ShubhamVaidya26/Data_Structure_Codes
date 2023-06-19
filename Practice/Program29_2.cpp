/*
29_2 -  Write a program which accept two number from user and
display position of common ON bits from that two numbers.

*/

#include <iostream>
using namespace std;

typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
    UINT iCount = 1;
    UINT iResult1 = 0;
    UINT iResult2 = 0;
    while ((iNo1 != 0) || (iNo2 != 0))
    {
        iResult1 = iNo1 & 1;
        iResult2 = iNo2 & 1;
        if ((iResult1 == 1) && (iResult2 == 1))
        {
            cout << iCount << "\t";
        }
        iNo1 = iNo1 >> 1;
        iNo2 = iNo2 >> 1;
        iCount++;
    }
    
}
int main()
{
    UINT iValue1 = 0;
    UINT iValue2 = 0;

    cout << "Enter first number : "
         << "\n";
    cin >> iValue1;
    cout << "Enter second number : "
         << "\n";
    cin >> iValue2;

    CommonBits(iValue1, iValue2);

    return 0;
}