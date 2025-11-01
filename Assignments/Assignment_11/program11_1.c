//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   : RangeDisplay
//  Description     : It is used to accept range and display numbers between that range
//  Input           : Int, Int
//  Output          : Void
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 01/11/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplay(
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
        {
            printf("%d\t", iCnt);
        }
    }
    
} // End of RangeDisplay

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

    RangeDisplay(iValue1, iValue2);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   23  35      Output  :   23      24      25      26      27      28      29      30      31      32      33      34      35
//  Input   :   10  18      Output  :   10      11      12      13      14      15      16      17      18
//  Input   :   10  10      Output  :   10
//  Input   :   -10 2       Output  :   -10     -9      -8      -7      -6      -5      -4      -3      -2      -1      0       1       2
//  Input   :   90  18      Output  :   Invalid Range
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 