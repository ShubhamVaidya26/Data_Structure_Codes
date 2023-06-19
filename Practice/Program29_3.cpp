/*
29_3 - Write a program which accept one number from user and
check whether 9th or 12th bit is ON or OFF


*/

#include <iostream>

using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask1 = 0X00000100;
    UINT iMask2 = 0X00000800;
    UINT iMask = 0x00000000;
    UINT iResult1 = 0;
    UINT iResult2 = 0;

    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask2;
    if ((iResult1 == iMask1) || (iResult2 != iMask2))
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
        cout << "9th or 12th Bit is ON"
             << "\n";
    }
    else
    {
        cout << "9th or 12th Bit is OFF"
             << "\n";
    }

    return 0;
}