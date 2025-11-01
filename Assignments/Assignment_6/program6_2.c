///////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   : CheckGreater
//  Description     : It is used to check whether entered number is greater or smaller than 100
//  Input           : Int
//  Output          : Bool
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 24/10/2025
// 
///////////////////////////////////////////////////////////////////////////////////

bool CheckGreater(int iNo)
{
    if(iNo > 100)
    {
        return true;
    }
    else
    {
        return false;
    }
} // End of CheckGreater

//  Time complexity :   O(1)

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

    if(iValue == 100)
    {
        printf ("Same number i.e. 100\n");
    }
    else
    {
        bRet = CheckGreater(iValue);

        if(bRet == true)
        {
            printf("Greater");
        }
        else
        {
            printf("Smaller");
        }
    }   

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input : 500         Output : Greater
//  Input : 50          Output : Smaller
//  Input : 100         Output : Same number i.e. 100
// 
///////////////////////////////////////////////////////////////////////////////////