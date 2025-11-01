//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   : RangeDisplayEven
//  Description     : It is used to accept range and display all even numbers between that range
//  Input           : Int, Int
//  Output          : Void
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 01/11/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplayEven(
                    int iStart,                             // Starting point
                    int iEnd                                // Ending point
                )
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t", iCnt);
        }
    }
   
} // End of RangeDisplayEven

//  Time Complexity :   O(N)

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   23  35      Output  :   24      26      28      30      32      34
//  Input   :   10  18      Output  :   10      12      14      16      18
//  Input   :   10  10      Output  :   10
//  Input   :   -10 2       Output  :   -10     -8      -6      -4      -2      0       2
//  Input   :   90  18      Output  :   Invalid Range
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 