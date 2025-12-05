///////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CheckPresence
//  Description     : It accepts a string and a character from the user and checks whether that character is present in it or not
//  Input           : Char[], Char
//  Output          : Bool
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 4/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////

bool CheckPresence(char str[], char ch)
{
    bool bFlag = false;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            bFlag = true;
            break;
        }

        str++;
    }
    return bFlag;
} // End of CheckPresence

///////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    bool bRet = '\0';

    printf("Enter a string : \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter a character to check its presence : \n");
    scanf(" %c", &cValue);

    bRet = CheckPresence(Arr, cValue);

    if (bRet == true)
    {
        printf("%c is present.\n", cValue);
    }
    else
    {
        printf("%c is not present.\n", cValue);
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases handled succesfully by the application
//
//  Input   :  shraddha mutange     a       Output  :   a is present
//  Input   :  shraddha             w       Output  :   w is not present
//
///////////////////////////////////////////////////////////////////////////////////////