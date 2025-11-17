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
//  Function Name   : EvenFrequencyCalculate
//  Description     : It accepts N numbers from user and return frequency of even numbers
//  Input           : Int, Int
//  Output          : Int
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 15/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////

int EvenFrequencyCalculate(int Arr[], int iSize)
{
    int iCnt = 0;   // Loop counter
    int iCount = 0; // For frequency of even numbers

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] % 2 == 0)
        {
            iCount++;
        }
    }
    return iCount;
} // End of EvenFrequencyCalculate

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
    iRet = EvenFrequencyCalculate(iPtr, iLength);

    printf("Frequency of even numbers : %d\n", iRet);

    // Step 3 : Free the memory
    free(iPtr);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases handled succesfully by the application
//
//  Input   : 85    66  3   80  93  88      Output  : 3
//  Input   : 10    20  30  44  51          Output  : 4
//
///////////////////////////////////////////////////////////////////////////////////////