/////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   FactorialDiff
//  Description     :   It returns difference between even factorial and odd factorial of given number.
//  Input           :   Int
//  Output          :   Int
//  Author          :   Shraddha Dhananjay Mutange
//  Date            :   25/10/2025
//  
/////////////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iCnt % 2 != 0)
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    return (iEvenFact-iOddFact);
} // End of FactorialDiff

/////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Even-Odd Factorial Difference is : %d\n", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled succrsfully by the application
// 
//  Input : 5       Output  : Factorial is : -7
//  Input : -5      Output  : Factorial is : -7
//  Input : 10      Output  : Factorial is : 2895
// 
///////////////////////////////////////////////////////////////////////////////// 