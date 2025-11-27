///////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CheckSmall
//  Description     : It accepts a character from user and checks whether it is small or not
//  Input           : Char
//  Output          : Void
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 27/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char cDiv)
{
    if(cDiv == 'A' || cDiv == 'a')
    {
        printf("Your exam is at 7 AM\n");
    }
    else if(cDiv == 'B' || cDiv == 'b')
    {
        printf("Your exam is at 8.30 AM\n");
    }
    else if(cDiv == 'C' || cDiv == 'c')
    {
        printf("Your exam is at 9.20 AM\n");
    }
    else if(cDiv == 'D' || cDiv == 'd')
    {
        printf("Your exam is at 10.30 AM\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char ch = '\0';

    printf("Enter your division : \n");
    scanf("%c", &ch);

    DisplaySchedule(ch);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases handled succesfully by the application
//
//  Input   :   a       Output  :   Your exam is at 7 AM
//  Input   :   A       Output  :   Your exam is at 7 AM
//  Input   :   B       Output  :   Your exam is at 8.30 AM
//
///////////////////////////////////////////////////////////////////////////////////////