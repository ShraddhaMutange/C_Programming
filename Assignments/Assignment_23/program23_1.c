///////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int *IPTR;

///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Check
//  Description     : It accepts N numbers from user and accept one another number then it checks whether it contains
//                    that number
//  Input           : Int, Int, Int
//  Output          : Bool
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 16/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////

bool Check(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
} // End of Check

//  Time Complexity : <= O(N)

///////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCnt = 0, iLength = 0, iValue = 0;
    bool bRet = false;
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

    printf("Enter number to check : \n");
    scanf("%d", &iValue);

    // Step 2 : Use the memory
    bRet = Check(iPtr, iLength, iValue);

    if (bRet == true)
    {
        printf("%d is present in the data\n", iValue);
    }
    else
    {
        printf("%d is not present in the data\n", iValue);
    }

    // Step 3 : Free the memory
    free(iPtr);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases handled succesfully by the application
//
//  Input : 85  66  3   80  93  11  90      iValue  : 11    Output  : 11 is present in the data
//  Input : 1   2   3   4   5               iValue  : 12    Output  : 12 is not present in the data
//
///////////////////////////////////////////////////////////////////////////////////////