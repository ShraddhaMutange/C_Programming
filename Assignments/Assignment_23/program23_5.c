///////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

typedef int *IPTR;

///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : ProductOdd
//  Description     : It accepts N numbers from user and return product of all odd elements
//  Input           : Int, Int
//  Output          : Int
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 16/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////

int ProductOdd(int Arr[], int iSize)
{
    int iCnt = 0, iProd = 1;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] % 2 != 0)
        {
            iProd = iProd * Arr[iCnt];
        }
    }
    return iProd;
} // End of ProductOdd

//  Time Complexity : O(N)

///////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCnt = 0, iLength = 0, iRet = 0;
    IPTR iPtr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d", &iLength);

    // Step 1 : Allocate the memory
    iPtr = (IPTR)malloc(iLength * sizeof(int));

    if (NULL == iPtr)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the elements : \n");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &iPtr[iCnt]);
    }

    // Step 2 : Use the memory
    iRet = ProductOdd(iPtr, iLength);

    printf("Product of all odd elements is : %d\n", iRet);

    // Step 3 : Free the memory
    free(iPtr);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases handled succesfully by the application
//
//  Input : 11  12  13  14  15          Output  : 2145
//  Input : 1   2   3   4   5           Output  : 15
//
///////////////////////////////////////////////////////////////////////////////////////