//4 - Accept N numbers from user and accept range,Display all elements from that range.

#include <stdio.h>  //Input and Output
#include <stdlib.h> //Memory management

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt] >= iStart) && ((Arr[iCnt]) <= iEnd))
        {
            printf("numbers :%d\n", Arr[iCnt]);
        }
    }
}

int main() // Entry point function
{

    int iSize = 0;   // to store the number of elements from user
    int *ptr = NULL; // to store the address of array
    int iCnt = 0;    // loop counter
    int iValue1 = 0;
    int iValue2 = 0;

    // Step 1 :Accept the number of elements from user
    printf("Enter the number of elements:\n");
    scanf("%d", &iSize);
    printf("Enter the starting point :\n");
    scanf("%d", &iValue1);
    printf("Enter the ending point:\n");
    scanf("%d", &iValue2);

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
    Range(ptr, iSize, iValue1, iValue2);

    // Step 6 : Dealocate the memory of array

    free(ptr);

    return 0; // return success to OS
}