/////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

/////////////////////////////////////////////////////////////////////////
// 
//  Function Name   : Check
//  Description     : It is used to check whether the number accepted from user is divisble by 5 or not
//  Input           : Int
//  Output          : Bool
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 18/10/2025
// 
/////////////////////////////////////////////////////////////////////////

bool Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
} // End of Check

/////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                             // To accept theuser input
    bool bRet = false;                          // To store the result

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not divisible by 5");
    }

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases successfully handled by the application
// 
//  Input : 5       Output : Divisible by 5
//  Input : 11      Output : Not divisible by 5
// 
/////////////////////////////////////////////////////////////////////////////////