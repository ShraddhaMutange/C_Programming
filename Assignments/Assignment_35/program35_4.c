///////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CheckVowels
//  Description     : It accepts a string from user and checks whether it contains vowels (a, e, i, o, u) in it or not
//  Input           : Char
//  Output          : Int
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 28/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////

bool CheckVowels(char str[])
{
    bool bFlag = false;

    while (*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') || 
        (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
            bFlag = true;
            break;
        }

        str++;
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
    char Arr[50] = {'\0'};
    bool bRet = false;

    printf("Enter the string : \n");
    scanf("%[^'\n']s", Arr);

    bRet = CheckVowels(Arr);

    if(bRet == true)
    {
        printf("It contains vowel\n");
    }
    else
    {
        printf("It does not contain vowel\n");
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases handled succesfully by the application
//
//  Input   :   India           Output  :   It contains vowel
//  Input   :   sdfg            Output  :   It does not contain vowel
//
///////////////////////////////////////////////////////////////////////////////////////