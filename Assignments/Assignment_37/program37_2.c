///////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CountFrequency
//  Description     : It accepts a string and a character from the user and returns the frequency of the character
//  Input           : Char[], Char
//  Output          : Int
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 4/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////

int CountFrequency(char str[], char ch)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            iCount++;
        }

        str++;
    }
    return iCount;
} // End of CountFrequency

///////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter a string : \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter a character whoes frequency needs to be calculated : \n");
    scanf(" %c", &cValue);

    iRet = CountFrequency(Arr, cValue);

    printf("Frequency of %c : %d\n", cValue, iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases handled succesfully by the application
//
//  Input   :  shraddha mutange     a       Output  :   3
//  Input   :  marvellous           l       Output  :   2
//
///////////////////////////////////////////////////////////////////////////////////////