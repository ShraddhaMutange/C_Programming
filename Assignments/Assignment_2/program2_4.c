/////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   Display
//  Description     :   Displays first number in second number of times.
//  Input           :   Int, Int
//  Output          :   void      
//  Author          :   Shraddha Dhananjay Mutange
//  Date            :   23/10/2025
// 
/////////////////////////////////////////////////////////////////////////////////

void Display(
                int iNo,                            // First input
                int iFrequency                      // Second input
            )
{
    int iCnt = 0;

    if(iNo < 0)                                     // Filter
    {
        iNo = -iNo;
    }

    if(iFrequency < 0)                              // Filter
    {
        iFrequency = -iFrequency;
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t", iNo);
    }


} // End of Display

/////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                     // To accept the user input
    int iCount = 0;                     // To accept the user input (frequency)

    printf("Enter number : ");
    scanf("%d", &iValue);

    printf("Enter frequency : ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases succesfully handled by the application
// 
//  Input : 12  5       Output : 12      12      12      12      12
//  Input : -2  3       Output : -2      -2      -2
//  Input : 21  -3      Output : 21      21      21
//  Input : -2  0       Output :
// 
/////////////////////////////////////////////////////////////////////////////////