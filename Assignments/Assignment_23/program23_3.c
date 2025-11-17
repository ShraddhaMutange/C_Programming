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
//  Function Name   : LastOccurence
//  Description     : It accepts N numbers from user and accept one another number and return index of last occurence
//                    of that number
//  Input           : Int, Int, Int
//  Output          : Int
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 16/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////

int LastOccurence(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iFlag = -1;

    for (iCnt = (iSize - 1); iCnt >= 0; iCnt--)
    {
        if (Arr[iCnt] == iNo)
        {
            iFlag = iCnt;
            break;
        }
    }

    return iFlag;
} // End of LastOccurence

//  Time Complexity : <= O(N)

///////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCnt = 0, iLength = 0, iValue = 0, iRet = 0;
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
    iRet = LastOccurence(iPtr, iLength, iValue);

    printf("Index of last occurence of %d is : %d\n", iValue, iRet);

    // Step 3 : Free the memory
    free(iPtr);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases handled succesfully by the application
//
//  Input : 7           85  11  3   80  93  11  90      iValue  : 11    Output  : 5
//  Input : 5           20  11  21  22  21              iValue  : 21    Output  : 4
//  Input : 7           85  11  3   80  93  11  90      iValue  : 12    Output  : -1
//
///////////////////////////////////////////////////////////////////////////////////////