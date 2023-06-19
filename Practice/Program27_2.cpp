/*
27_2 - Write a program which accept number from user and off 7th bit
and 10th bit of that number.return modified number.

*/

#include <iostream>

using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0X00000240;
    UINT iResult = 0;

    iResult = iNo & iMask;
    if (iResult == iMask) // Bit is ON
    {
        return (iNo ^ iMask);
    }
    else // Bit is OFF
    {
        return iNo;
    }
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout << "Enter Number :"
         << "\n";
    cin >> iValue;

    iRet = OffBit(iValue);

    cout << "Result is:" << iRet << "\n";

    return 0;
}