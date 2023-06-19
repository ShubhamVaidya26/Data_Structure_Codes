/*
26_1 - Write a program which checks whether 15th
is ON or OFF.

*/

#include <iostream>

using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X00004000;
    UINT iResult = 0;

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
    bool bRet = false;

    cout << "Enter Number :"
         << "\n";
    cin >> iValue;

    bRet = CheckBit(iValue);

    if ((bRet == true))
    {
        cout << "15 th Bit is ON"
             << "\n";
    }
    else
    {
        cout << "15 th Bit is OFF"
             << "\n";
    }

    return 0;
}