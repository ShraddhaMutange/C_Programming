/////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   : Display
//  Description     : It is used to accept number from user and print its number line
//  Input           : Int
//  Output          : Void
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 25/10/2025
//  
/////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t", -iCnt);
    }

    for(iCnt = 0; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
} // End of Display

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

    Display(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input : 4       Output  : -4      -3      -2      -1      0       1       2       3       4
//  Input : -5      Output  : -5      -4      -3      -2      -1      0       1       2       3       4       5
//  Input : 3       Output  : -3      -2      -1      0       1       2       3
// 
///////////////////////////////////////////////////////////////////////////////// 