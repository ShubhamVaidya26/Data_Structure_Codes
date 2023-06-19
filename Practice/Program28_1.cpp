/*
28_1 - Write a program which accepts one number and position
from user and check whether bit at that position is on or off.
If bit is on return true otherwise return false.
*/

#include <iostream>

using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo & iMask;

    if ((iResult == iMask))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT iValue = 0;
    UINT iBit = 0;
    bool bRet = false;

    cout << "Enter Number :"
         << "\n";
    cin >> iValue;

    cout << "Enter Position :"
         << "\n";
    cin >> iBit;

    bRet = CheckBit(iValue, iBit);

    if ((bRet == true))
    {
        cout << "Bit is ON"
             << "\n";
    }
    else
    {
        cout << "Bit is OFF"
             << "\n";
    }

    return 0;
}