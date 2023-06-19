/*
26_4 - Write a program which checks whether 7th, 8th and  9th
is ON or OFF.

*/

#include <iostream>

using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X000001C0;
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
        cout << " 7th, 8th and 9th Bit is ON"
             << "\n";
    }
    else
    {
        cout << " 7th, 8th and 9th Bit is OFF"
             << "\n";
    }

    return 0;
}