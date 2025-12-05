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

int LastOccurence(char str[], char ch)
{
    int iCnt = 0;
    int iLast = 0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            iLast = iCnt;
        }

        str++;
        iCnt++;
    }
    return iLast;
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

    iRet = LastOccurence(Arr, cValue);

    printf("Index of last occurence of %c : %d\n", cValue, iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases handled succesfully by the application
//
//  Input   :  shraddha mutange     a       Output  :   12
//  Input   :  marvellous           l       Output  :   6
//
///////////////////////////////////////////////////////////////////////////////////////