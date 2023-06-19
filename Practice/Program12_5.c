// 12_5 - Accept N numbers from user and display summation of digits of each number.

#include <stdio.h>  //Input and Output
#include <stdlib.h> //Memory management

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;
    int iSum = 0;

    int iDigit = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        while ((Arr[iCnt] != 0))
        {
            iDigit = Arr[iCnt] % 10;
            iSum = iSum + iDigit;
            Arr[iCnt] = Arr[iCnt] / 10;
        }
        printf("Sum is :%d\n", iSum);
        iSum = 0;
    }
}

int main() // Entry point function
{

    int iSize = 0;   // to store the number of elements from user
    int *ptr = NULL; // to store the address of array
    int iCnt = 0;    // loop counter

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
    Digits(ptr, iSize);

    // Step 6 : Dealocate the memory of array

    free(ptr);

    return 0; // return success to OS
}