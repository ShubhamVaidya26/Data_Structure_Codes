#include <stdio.h>  //Input and Output
#include <stdlib.h> //Memory management

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEven = 0;
    int iOdd = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt] % 2) == 0)
        {
            iEven++;
        }
    }
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt] % 2) != 0)
        {
            iOdd++;
        }
    }
    return (iEven - iOdd);
}

int main() // Entry point function
{

    int iSize = 0;   // to store the number of elements from user
    int *ptr = NULL; // to store the address of array
    int iCnt = 0;    // loop counter
    int iRet = 0;

    // Step 1 :Accept the number of elements from user
    printf("Enter the number of elements:\n");
    scanf("%d", &iSize);

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
    iRet = Frequency(ptr, iSize);
    printf("Result is :%d", iRet);

    // Step 6 : Dealocate the memory of array

    free(ptr);

    return 0; // return success to OS
}