/////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   : PatternDisplay
//  Description     : It is used to accept number from user and print that number of * & # on screen
//  Input           : Int
//  Output          : Void
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 25/10/2025
//  
/////////////////////////////////////////////////////////////////////////////////

void PatternDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }
} // End of PatternDisplay

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

    PatternDisplay(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled succrsfully by the application
// 
//  Input : 5       Output  : *       *       *       *       *       #       #       #       #       #
//  Input : -5      Output  : *       *       *       *       *       #       #       #       #       #
//  Input : 6       Output  : *       *       *       *       *       *       #       #       #       #       #       #
//  Input : 2       Output  : *       *       #       #
// 
///////////////////////////////////////////////////////////////////////////////// 