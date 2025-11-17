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
//  Function Name   : Display
//  Description     : It accepts N numbers from user and display all such numbers which are divisible by 5
//  Input           : Int, Int
//  Output          : Void
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 16/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] % 11 == 0)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
    printf("\n");
} // End of Display

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
    Display(iPtr, iLength);

    // Step 3 : Free the memory
    free(iPtr);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases handled succesfully by the application
//
//  Input   :   85  66  3   55  93  88
//  Output  :   66  55  88
//
///////////////////////////////////////////////////////////////////////////////////////