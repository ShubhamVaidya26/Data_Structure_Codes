/*
29_4 - Write a program which accept one number,two positions from user and
check whetherbit at first or bit at second position is ON or OFF.

*/

#include <iostream>

using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo, UINT iPos1, UINT iPos2)
{
    UINT iMask1 = 0X00000001;
    UINT iMask2 = 0X00000001;

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    iResult = iNo & (iMask1 | iMask2);
    if (iResult == (iMask1 | iMask2))
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
    UINT iBit1 = 0;
    UINT iBit2 = 0;
    bool bRet = false;

    cout << "Enter Number :"
         << "\n";
    cin >> iValue;
    cout << "Enter first position :"
         << "\n";
    cin >> iBit1;
    cout << "Enter second position :"
         << "\n";
    cin >> iBit2;

    bRet = CheckBit(iValue, iBit1, iBit2);

    if ((bRet == true))
    {
        cout << "True"
             << "\n";
    }
    else
    {
        cout << "False"
             << "\n";
    }

    return 0;
}