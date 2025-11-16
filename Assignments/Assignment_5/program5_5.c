///////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   : FindLargest
//  Description     : It is used to find the maximum of three numbers
//  Input           : Int, Int, Int
//  Output          : Int
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 24/10/2025
// 
///////////////////////////////////////////////////////////////////////////////////

int FindLargest(int iNo1, int iNo2, int iNo3)
{
    if((iNo1 > iNo2) && (iNo1 > iNo3))
    {
        return iNo1;
    }
    else if((iNo2 > iNo1) && (iNo2 > iNo3))
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
} // End of FindLargest

///////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
// 
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    printf("Enter three numbers :\n");
    scanf("%d%d%d", &iValue1, &iValue2, &iValue3);

    if((iValue1 == iValue2) && (iValue2 == iValue3))
    {
        printf("All are equal\n");
    }
    else
    {
        iRet = FindLargest(iValue1, iValue2, iValue3);

        printf("Maximum is : %d", iRet);
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   : 15    5   25          Output : Maximum is : 25
//  Input   : -89   0   10          Output : Maximum is : 10
//  Input   : 21    21  21          Output : All are equal
// 
///////////////////////////////////////////////////////////////////////////////////