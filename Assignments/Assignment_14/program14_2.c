//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   : DisplayDigit
//  Description     : It is used to accept number and check if it contains zero or not
//  Input           : Int
//  Output          : BOOL
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 01/11/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckZero(int iNo)
{
    int iDigit = 0;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            return TRUE;
        }

        iNo = iNo / 10;
    }

    return FALSE;
} // End of CheckZero

//  Time complexity :   log(N)

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = CheckZero(iValue);    

    if(bRet == TRUE)
    {
        printf("It contains zero\n");
    }
    else
    {
        printf("It contains no zero\n");
    }
    
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   2395    Output  :   It contains no zero
//  Input   :   1018    Output  :   It contains zero
//  Input   :   9000    Output  :   It contains zero
//  Input   :   10687   Output  :   It contains zero
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 