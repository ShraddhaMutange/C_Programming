/////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   : TableReverse
//  Description     : It is used to accept number and display its table in reverse.
//  Input           : Int
//  Output          : Void
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 25/10/2025
//  
/////////////////////////////////////////////////////////////////////////////////

void TableReverse(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\t", iNo*iCnt);
    }
} // End of TableReverse

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

    TableReverse(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input : 2       Output  : 20      18      16      14      12      10      8       6       4       2
//  Input : 5       Output  : 50      45      40      35      30      25      20      15      10      5
//  Input : -5      Output  : 50      45      40      35      30      25      20      15      10      5
// 
///////////////////////////////////////////////////////////////////////////////// 