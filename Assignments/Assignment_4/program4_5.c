////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   : FactDiff
//  Description     : It accepts number from user and return difference between summation of all its factors and non factors
//  Input           : Int
//  Output          : Int
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 24/10/2025
// 
////////////////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;                                       // To store summation of factors
    int iSumNonFact = 0;                                    // To store summation of non factors

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(((iNo % iCnt) == 0))
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }
    // printf("SumFact = %d\n", iSumFact);
    // printf("SumNonFact = %d\n", iSumNonFact);
    return (iSumFact - iSumNonFact);
} // End of FactDiff

////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;                                           // To store the result

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled succesfully by the application
// 
//  Input : 12      Output : -34
//  Input : 10      Output : -29
// 
////////////////////////////////////////////////////////////////////////////////////////////////