///////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

typedef int * IPTR;

///////////////////////////////////////////////////////////////////////////////////////
//  
//  Function Name   : DifferenceFrequency
//  Description     : It accepts N numbers from user and return differennce between frequency of even and odd numbers
//  Input           : Int, Int
//  Output          : Int
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 15/11/2025
// 
///////////////////////////////////////////////////////////////////////////////////////

int DifferenceFrequency(int Arr[], int iSize)
{
    int iCnt = 0, iEvenCount = 0, iOddCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenCount++;
        }

        if(Arr[iCnt] % 2 != 0)
        {
            iOddCount++;
        }
    }
    return (iEvenCount - iOddCount);
} // End of DifferenceFrequency

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

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &iPtr[iCnt]);
    }

    // Step 2 : Use the memory
    iRet = DifferenceFrequency(iPtr, iLength);
    
    printf("Difference between even and odd frequency is : %d\n", iRet);

    // Step 3 : Free the memory
    free(iPtr);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled succesfully by the application
// 
//  Input : 85  66  3   80  93  88  90      Output  : 1
//  Input : 1   2   3   4   5               Output  : -1
// 
///////////////////////////////////////////////////////////////////////////////////////