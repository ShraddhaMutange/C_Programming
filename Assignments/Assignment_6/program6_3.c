///////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   : CheckEqual
//  Description     : It is used to check whether entered numbers are equal or not
//  Input           : Int, Int
//  Output          : Bool
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 24/10/2025
// 
///////////////////////////////////////////////////////////////////////////////////

bool CheckEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
} // End of CheckEqual

//  Time complexity :   O(1)

///////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
// 
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet = false;                              // To store the result

    printf("Enter two numbers :\n");
    scanf("%d%d", &iValue1, &iValue2);
    
    bRet = CheckEqual(iValue1, iValue2);

    if(bRet == true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not equal");
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   : 100   100         Output : Equal
//  Input   : 500   100         Output : Not equal
//  Input   : -10   10          Output : Not equal
// 
///////////////////////////////////////////////////////////////////////////////////