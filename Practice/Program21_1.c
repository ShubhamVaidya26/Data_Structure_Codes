/* 21_1 -> write a program which display ASCII table.Table contains symbol,
Decimal,Hexadecimal and octal representation of every member from
0 to 255

*/

#include <stdio.h>

void DisplayASCII()
{
    int iCnt = 0;
    printf("\tDecimal\t\tHexadecimal\t\tOctal\t\tChar\n");

    for (iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("\t%d\t\t\t%x\t\t%o\t\t%c\n", iCnt, iCnt, iCnt, iCnt);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}
