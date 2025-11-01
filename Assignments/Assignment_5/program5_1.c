///////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   : CheckEvenOdd
//  Description     : It is used to check whether accpted number is even or odd
//  Input           : Int
//  Output          : Bool
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 24/10/2025
// 
///////////////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    if(iNo < 0)                                     // Filter
    {
        iNo = -iNo;
    }

    if(iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
} // End of CheckEvenOdd

///////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
// 
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;                              // To store the result

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is even", iValue);
    }
    else
    {
        printf("%d is odd", iValue);
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input : 12      Output : 12 is even
//  Input : -11     Output : -11 is odd
//  Input : 0       Output : 0 is even
// 
///////////////////////////////////////////////////////////////////////////////////