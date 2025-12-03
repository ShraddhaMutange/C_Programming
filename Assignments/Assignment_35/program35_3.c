///////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Difference
//  Description     : It accepts a string from user and returns the difference between frequency of small numbers and frequency
//                    of capital numbers
//  Input           : Char
//  Output          : Int
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 28/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////

int Difference(char str[])
{
    int iCountSmall = 0, iCountCapital = 0;

    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }

        if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCapital++;
        }

        str++;
    }

    return (iCountSmall - iCountCapital);
}

///////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s", Arr);

    iRet = Difference(Arr);

    printf("Difference is : %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases handled succesfully by the application
//
//  Input   :   INdia Is mY coUNTry         Output  :   2
//  Input   :   shraddha                    Output  :   8
//  Input   :   SHRADDHA                    Output  :   -8
//
///////////////////////////////////////////////////////////////////////////////////////