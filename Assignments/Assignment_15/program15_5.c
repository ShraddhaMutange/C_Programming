//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   CountDiff
//  Description     :   It is used to accept number and diffrence between summation of even digits 
//                      and summation of odd digits
//  Input           :   Int
//  Output          :   Int
//  Author          :   Shraddha Dhananjay Mutange
//  Date            :   01/11/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iSumEven = 0;
    int iSumOdd = 0;
    int iDiff;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iSumEven = iSumEven + iDigit;
        }

        if(iDigit % 2 != 0)
        {
            iSumOdd = iSumOdd + iDigit;
        }

        iNo = iNo / 10;
    }

    iDiff = iSumEven - iSumOdd;

    return iDiff;
} // End of CountDiff

//  Time complexity :   log(N)

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);   
    printf("Difference is : %d", iRet);
    
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   2395        Output  :   -15
//  Input   :   1018        Output  :   6
//  Input   :   8440        Output  :   16
//  Input   :   5733        Output  :   -18
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 