// 12_4 - Accept N numbers from user and display all such numbers which contains 3 digits in it.

#include <stdio.h>  //Input and Output
#include <stdlib.h> //Memory management

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;
    int iCount = 0;

    int iDigit = 0;
    int iTemp = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        iTemp = Arr[iCnt];

        while (iTemp != 0)
        {
            iDigit = iTemp % 10;

            iCount++;
            iTemp = iTemp / 10;
        }
        if (iCount == 3)
        {

            printf("%d\n", Arr[iCnt]);
        }
        iCount = 0;
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