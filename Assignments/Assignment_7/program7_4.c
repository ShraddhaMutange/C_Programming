/////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   : OddDisplay
//  Description     : It is used to accept number from user and print all odd numbers till that number
//  Input           : Int
//  Output          : Void
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 25/10/2025
//  
/////////////////////////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t", iCnt);
        }
    }
} // End of OddDisplay

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

    OddDisplay(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input : 5       Output  : 1       2       3       4       5
//  Input : -5      Output  : 1       2       3       4       5
//  Input : 8       Output  : 1       2       3       4       5       6       7       8
// 
///////////////////////////////////////////////////////////////////////////////// 