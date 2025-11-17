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
//  Function Name   : RangeDisplay
//  Description     : It accepts N numbers from user and accept range and display all elements from that range
//                    that number
//  Input           : Int, Int, Int, Int
//  Output          : Void
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 16/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////

void RangeDisplay(int Arr[], int iSize, int iStart, int iLast)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iLast))
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
    printf("\n");
} // End of RangeDisplay

///////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCnt = 0, iLength = 0, iValue1 = 0, iValue2 = 0;
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

    printf("Enter range : \n");
    scanf("%d%d", &iValue1, &iValue2);

    // Step 2 : Use the memory
    RangeDisplay(iPtr, iLength, iValue1, iValue2);

    // Step 3 : Free the memory
    free(iPtr);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases handled succesfully by the application
//
//  Input   : 10
//            1   2   3   4   5   6   7   8   9   10
//  iValue1 : 5     iValue2   : 10
//  Output  : 5   6   7   8   9   10
//
///////////////////////////////////////////////////////////////////////////////////////