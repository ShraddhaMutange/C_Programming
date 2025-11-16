/////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   : Table
//  Description     : It is used to accept number and display its table.
//  Input           : Int
//  Output          : Void
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 25/10/2025
//  
/////////////////////////////////////////////////////////////////////////////////

void Table(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t", iNo*iCnt);
    }
} // End of Table

//  Time complexity :   O(1)

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

    Table(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input : 2       Output  : 2       4       6       8       10      12      14      16      18      20
//  Input : 5       Output  : 5       10      15      20      25      30      35      40      45      50
//  Input : -5      Output  : 5       10      15      20      25      30      35      40      45      50
// 
///////////////////////////////////////////////////////////////////////////////// 