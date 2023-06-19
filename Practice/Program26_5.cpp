/*
26_5 - Write a program which checks whether first and last bit is ON or
oFF.First bit means bit number 1 and last bit means bit number 32.


*/

#include <iostream>

using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X80000001;
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
        cout << "First and Last Bit is ON"
             << "\n";
    }
    else
    {
        cout << "First and Last Bit is OFF"
             << "\n";
    }

    return 0;
}