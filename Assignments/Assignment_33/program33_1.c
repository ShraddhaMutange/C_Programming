///////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CheckAlphabet
//  Description     : It accepts a character from user and checks whether it is an alphabate or not
//  Input           : Char
//  Output          : Bool
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 27/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////

bool CheckAlphabet(char ch)
{
    bool bFlag = false;

    if (((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z')))
    {
        bFlag = true;
    }

    return bFlag;
}

///////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter a character : \n");
    scanf("%c", &ch);

    bRet = CheckAlphabet(ch);

    if (bRet == true)
    {
        printf("%c is an alphabet\n", ch);
    }
    else
    {
        printf("%c is not an alphabet\n", ch);
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases handled succesfully by the application
//
//  Input   :   s       Output  :   s is an alphabet
//  Input   :   A       Output  :   A is an alphabet
//  Input   :   3       Output  :   3 is not an alphabet
//  Input   :   @       Output  :   @ is not an alphabet
//  Input   :   [space] Output  :     is not an alphabet
//
///////////////////////////////////////////////////////////////////////////////////////