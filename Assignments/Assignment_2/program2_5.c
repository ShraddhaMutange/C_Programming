/////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

/////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   Display
//  Description     :   Checks whether number is even or odd.
//  Input           :   Int
//  Output          :   bool      
//  Author          :   Shraddha Dhananjay Mutange
//  Date            :   23/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////

bool CheckEven(int iNo)
{
    if(iNo < 0)                                     // Filter
    {
        iNo = -iNo;
    }

    if((iNo % 2) == 0)                              // Business logic
    {
        return true;
    }    
    else
    {
        return false;
    }


} // End of Display

/////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                     // To accept the user input
    bool bRet = false;                      // To store the result

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("%d is even.", iValue);
    }
    else
    {
        printf("%d is odd.", iValue);
    }

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases successfully handled by the application
// 
//  Input : 12      Output : 12 is even.
//  Input : -6      Output : -6 is even.
//  Input : 0       Output : 0 is even.
//  Input : 21      Output : 21 is odd.
// 
/////////////////////////////////////////////////////////////////////////////////