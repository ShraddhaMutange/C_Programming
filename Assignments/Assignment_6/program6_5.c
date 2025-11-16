///////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   : Percentage
//  Description     : It is used to accept total and obtained marks from user and calculate percentage
//  Input           : Int, Int
//  Output          : Float
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 24/10/2025
// 
///////////////////////////////////////////////////////////////////////////////////

float Percentage(int iTotal, int iObtained)
{
    float fPerc = 0.0;

    if(iTotal <= 0)
    {
        printf("Invalid total marks\n");
        return 0.0;
    }

    fPerc = ((float)iObtained / iTotal) * 100;

    return fPerc;    
} // End of Percentage

//  Time complexity :   O(1)

///////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
// 
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet = 0.0;                              // To store the result

    printf("Enter total marks :\n");
    scanf("%d", &iValue1);

    printf("Enter obtained marks :\n");
    scanf("%d", &iValue2);
    
    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is : %f%%", fRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   : 1000  745         Output : Percentage is : 74.500000%
//  Input   : 0     745         Output : Invalid total marks    Percentage is : 0.000000%
// 
///////////////////////////////////////////////////////////////////////////////////