#include <stdio.h>  //Input and Output;
#include <stdlib.h> //Memory Management

int Difference(int Arr[], int iLength) 
{
    int iCnt = 0;
    int iEven = 0;
    int iOdd = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt] % 2) == 0)
        {
            iEven = iEven + Arr[iCnt];
        }
    }

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt] % 2) != 0)
        {
            iOdd = iOdd + Arr[iCnt];
        }
    }
    return (iEven - iOdd);
}

int main() // Entry point function
{
    int iSize = 0; // To store size of array

    int *ptr = NULL; // to store address of array
    int iCnt = 0;    // Loop Counter
    int iRet = 0;

    // Step 1 : Accept the number of elements from user
    printf("Enter number of elements :\n");
    scanf("%d", &iSize);

    // Step 2 : Allocate memory dynamically
    ptr = (int *)malloc(iSize * sizeof(int));

    if (ptr == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    // Step 3 : Accept the values from user
    printf("Enter the elements :\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    // Step 4 : Pass the array to the function
    iRet = Difference(ptr, iSize); // Demo(400,4);
    printf("Difference is :%d", iRet);

    // Step 6 : Deallocate the memory o array

    free(ptr);

    return 0; // Return success to OS
}