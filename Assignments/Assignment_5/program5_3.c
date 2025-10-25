///////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   : CheckLeapYear
//  Description     : It is used to check whether entered year is leap or not
//  Input           : Int
//  Output          : Bool
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 24/10/2025
// 
///////////////////////////////////////////////////////////////////////////////////

bool CheckLeapYear(int iYr)
{
    if(iYr < 0)                                     // Filter
    {
        iYr = -iYr;
    }

    if(iYr % 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
} // End of CheckLeapYear

///////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
// 
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;                              // To store the result

    printf("Enter year : ");
    scanf("%d", &iValue);

    bRet = CheckLeapYear(iValue);

    if(bRet == true)
    {
        printf("%d is a leap year.", iValue);
    }
    else
    {
        printf("%d is not a leap year.", iValue);
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled succesfully by the application
// 
//  Input : 2024        Output : 2024 is a leap year.
//  Input : 2025        Output : 2025 is not a leap year.
// 
///////////////////////////////////////////////////////////////////////////////////