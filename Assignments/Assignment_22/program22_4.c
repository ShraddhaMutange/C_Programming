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
//  Function Name   : Frequency
//  Description     : It accepts N numbers from user and return frequency of 11
//  Input           : Int, Int
//  Output          : Int
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 16/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iSize)
{
    int iCnt = 0;   // Loop counter
    int iCount = 0; // For frequency of even numbers

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == 11)
        {
            iCount++;
        }
    }
    return iCount;
} // End of Frequency

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
    iRet = Frequency(iPtr, iLength);

    printf("Frequency of 11 : %d\n", iRet);

    // Step 3 : Free the memory
    free(iPtr);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases handled succesfully by the application
//
//  Input   :   85  66  3   80  93  88      Output  : 0
//  Input   :   11  21  51  11  21  11      Output  : 3
//
///////////////////////////////////////////////////////////////////////////////////////