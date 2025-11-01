/////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   SingleDigitDisplay
//  Description     :   It is used to accept a single digit number from user and print it into word.
//  Input           :   Int
//  Output          :   Void
//  Author          :   Shraddha Dhananjay Mutange
//  Date            :   25/10/2025
//  
/////////////////////////////////////////////////////////////////////////////////

void SingleDigitDisplay(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        printf("Zero");
    }
    else if(iNo == 1)
    {
        printf("One");
    }
    else if(iNo == 2)
    {
        printf("Two");
    }
    else if(iNo == 3)
    {
        printf("Three");
    }
    else if(iNo == 4)
    {
        printf("Four");
    }
    else if(iNo == 5)
    {
        printf("Five");
    }
    else if(iNo == 6)
    {
        printf("Six");
    }
    else if(iNo == 7)
    {
        printf("Seven");
    }
    else if(iNo == 8)
    {
        printf("Eight");
    }
    else if(iNo == 9)
    {
        printf("Nine");
    }
    else
    {
        printf("Invalid Number");
    }
} // End of SingleDigitDisplay

//  Time complexity :   O(1)

/////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter a single-digit number : ");
    scanf("%d", &iValue);

    SingleDigitDisplay(iValue);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input : 45      Output  : Small
//  Input : 50      Output  : Small
//  Input : 75      Output  : Medium
//  Input : 105     Output  : Large
// 
///////////////////////////////////////////////////////////////////////////////// 