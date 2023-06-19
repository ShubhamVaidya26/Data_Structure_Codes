// 3 - Accept N numbers from user and accept one another number as NO,return index of last occurrence of that NO.

#include <stdio.h>  //Input and Output
#include <stdlib.h> //Memory management

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for (iCnt = iLength - 1; iCnt >= 0; iCnt--)
    {
        if (Arr[iCnt] == iNo)
        {

            break;
        }
    }

    return iCnt;
}

int main() // Entry point function
{

    int iSize = 0;   // to store the number of elements from user
    int *ptr = NULL; // to store the address of array
    int iCnt = 0;    // loop counter
    int iRet = 0;
    int iValue = 0;

    // Step 1 :Accept the number of elements from user
    printf("Enter the number of elements:\n");
    scanf("%d", &iSize);
    printf("Enter the number :\n");
    scanf("%d", &iValue);

    // Step 2: Allocate the memory dynamically
    ptr = (int *)malloc(iSize * sizeof(int));
    if (ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the elements :\n");
    // Step 3 : Accept the values from user
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    // Step 4 : Pass the array to the function
    iRet = LastOcc(ptr, iSize, iValue);
    if (iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("Last occurence of number is %d", iRet);
    }

    // Step 6 : Dealocate the memory of array

    free(ptr);

    return 0; // return success to OS
}