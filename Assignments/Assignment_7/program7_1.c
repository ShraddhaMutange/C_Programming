/////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   : Pattern
//  Description     : It is used to accept number from user and print that number of $ & * on screen
//  Input           : Int
//  Output          : Void
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 25/10/2025
//  
/////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
} // End of Pattern

//  Time complexity :   O(N)

/////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input : 5       Output  : $       *       $       *       $       *       $       *       $       *
//  Input : -5      Output  : $       *       $       *       $       *       $       *       $       *
//  Input : 0       Output  : 
// 
///////////////////////////////////////////////////////////////////////////////// 