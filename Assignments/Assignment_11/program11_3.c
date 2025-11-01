//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   : RangeSum
//  Description     : It is used to accept range and display sum of numbers between that range
//  Input           : Int, Int
//  Output          : Int
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 01/11/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

int RangeSum(
                    int iStart,                             // Starting point
                    int iEnd                                // Ending point
                )
{
    int iCnt = 0;
    int iSum = 0;                                           // To store addition of numbers between range

    if((iStart > iEnd) || (iStart <= 0))
    {
        printf("Invalid Range\n");
        return 0;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
} // End of RangeSum

//  Time Complexity :   O(N)

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;                                           // To store result

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);
    
    printf("Addition is : %d\n", iRet);
    

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   23  30      Output  :   212
//  Input   :   10  18      Output  :   216
//  Input   :   -10 2       Output  :   Invalid Range
//  Input   :   90  18      Output  :   Invalid Range
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 