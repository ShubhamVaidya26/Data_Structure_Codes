/*
29_5 - Write a program which accept one number from user and
range of positions from user.Toggle all bits from that range.

*/

#include <iostream>

using namespace std;

typedef unsigned int UINT;

UINT CheckBit(UINT iNo, UINT iStart, UINT iEnd)
{

    UINT iMask = 0X00000001;
    int iCnt = 0;
    int iResult = 0;

    iMask = iMask << (iStart - 1);

    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iResult = iNo ^ iMask;

        iMask = iMask << 1;
    }

    
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;
    UINT iRange1 = 0;
    UINT iRange2 = 0;

    cout << "Enter Number :"
         << "\n";
    cin >> iValue;
    cout << "Enter starting position :"
         << "\n";
    cin >> iRange1;
    cout << "Enter ending position :"
         << "\n";
    cin >> iRange2;

    iRet = CheckBit(iValue, iRange1, iRange2);

    cout << "Result is :" << iRet << "\n";

    return 0;
}