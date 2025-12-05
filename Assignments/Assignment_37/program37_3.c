///////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : FirstOccurence
//  Description     : It accepts a string and a character from the user and returns the index of first occurence of the character
//  Input           : Char[], Char
//  Output          : Int
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 4/12/2025
//
///////////////////////////////////////////////////////////////////////////////////////

int FirstOccurence(char str[], char ch)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            iCnt++;
            break;
        }

        str++;
    }
    return iCnt;
} // End of FirstOccurence

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

    printf("Enter a character : \n");
    scanf(" %c", &cValue);

    iRet = FirstOccurence(Arr, cValue);

    printf("Index of First occurence of %c : %d\n", cValue, iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases handled succesfully by the application
//
//  Input   :  shraddha mutange     a       Output  :   3
//  Input   :  marvellous           r       Output  :   2
//
///////////////////////////////////////////////////////////////////////////////////////