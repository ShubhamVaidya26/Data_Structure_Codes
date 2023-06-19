/*
28_5 - Write a program which accepts one number from user and toggle 
contents of first and last nibble
of the number.Return modified number.

(nibble is a group of four bits)
*/

#include <iostream>

using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0XF000000F;

    UINT iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;

    UINT iRet = 0;

    cout << "Enter Number :"
         << "\n";
    cin >> iValue;

    iRet = ToggleBit(iValue);

    cout << "Result is:" << iRet << "\n";
}