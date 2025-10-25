///////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   : FindMax
//  Description     : It is used to find the maximum of two numbers
//  Input           : Int, Int
//  Output          : Int
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 24/10/2025
// 
///////////////////////////////////////////////////////////////////////////////////

int FindMax(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
} // End of FindMax

///////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
// 
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter two numbers :\n");
    scanf("%d%d", &iValue1, &iValue2);

    if(iValue1 == iValue2)
    {
        printf("Both are equal\n");
    }
    else
    {
        iRet = FindMax(iValue1, iValue2);

        printf("Maximum is : %d", iRet);
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled succesfully by the application
// 
//  Input : 12    30        Output : Maximum is : 30
//  Input : 89    89        Output : Both are equal
//  Input : -20   -12       Output : Maximum is : -12
//  Input : 20    -12       Output : Maximum is : 20
// 
///////////////////////////////////////////////////////////////////////////////////