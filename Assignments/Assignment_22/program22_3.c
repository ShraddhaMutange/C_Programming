///////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int * IPTR;

///////////////////////////////////////////////////////////////////////////////////////
//  
//  Function Name   : CheckEleven
//  Description     : It accepts N numbers from user and checks whether it contains 11
//  Input           : Int, Int
//  Output          : Bool
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 15/11/2025
// 
///////////////////////////////////////////////////////////////////////////////////////

bool CheckEleven(int Arr[], int iSize)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 11 == 0)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
} // End of CheckEleven

//  Time Complexity : <= O(N)

///////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCnt = 0, iLength = 0;
    bool bRet = false;
    IPTR iPtr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d", &iLength);

    // Step 1 : Allocate the memory
    iPtr = (IPTR)malloc(iLength * sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory\n");
    }

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &iPtr[iCnt]);
    }

    // Step 2 : Use the memory
    bRet = CheckEleven(iPtr, iLength);
    
    if(bRet == true)
    {
        printf("11 is present in the data\n");
    }
    else
    {
        printf("11 is not present in the data\n");
    }

    // Step 3 : Free the memory
    free(iPtr);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled succesfully by the application
// 
//  Input : 85  66  3   80  93  11  90      Output  : 11 is present in the data
//  Input : 1   2   3   4   5               Output  : 11 is not present in the data
// 
///////////////////////////////////////////////////////////////////////////////////////