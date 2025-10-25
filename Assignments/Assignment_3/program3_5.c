//////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
//////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   : DisplayConvert
//  Description     : It accepts a character from user and check whether that character is vowel or not
//  Input           : Char
//  Output          : BOOL (int)
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 24/10/2025
// 
//////////////////////////////////////////////////////////////////////////////////////

BOOL CheckVowel(char cValue)
{
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' || cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
} // End of CheckVowel

//////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter character : ");
    scanf("%c", &cValue);

    bRet = CheckVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled succesfully by the application
//  
//  Input : a       Output : It is Vowel
//  Input : A       Output : It is Vowel
//  Input : w       Output : It is not Vowel
//  Input : z       Output : It is not Vowel
// 
//////////////////////////////////////////////////////////////////////////////////////