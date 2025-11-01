/////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   Number
//  Description     :   It is used to accept number from user and if number is 
//                      less than 50 then print small, if it is greater than 50
//                      and less than 100 then print medium, if it is greater
//                      than 100 then print large.
//  Input           :   Int
//  Output          :   Void
//  Author          :   Shraddha Dhananjay Mutange
//  Date            :   25/10/2025
//  
/////////////////////////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo <= 50)
    {
        printf("Small");
    }
    else if(iNo > 50 && iNo < 100)
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
} // End of Number

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

    Number(iValue);

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