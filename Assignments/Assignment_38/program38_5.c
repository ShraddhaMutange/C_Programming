/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name : StrCpyToggle
//  Description :   It converts the upper to lower case and lower to upper case in string 
//  Input :         char *, char *
//  Output :        void
//  Author :        Shraddha Dhananjay Mutange
//  Date :          4/12/2025
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

void StrCpyToggle(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
           *dest = *src + 32; 
        }
        else if((*src >= 'a') && (*src <= 'z'))
        {
           *dest = *src - 32; 
        }
        else
        {
            *dest = *src;
        }
        dest++;
        src++;
    }
    *dest = '\0';
}   // End of StrCpyToggle

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20] = {'\0'};
    char Brr[20] = {'\0'};

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    StrCpyToggle(Arr,Brr);

    printf("Updated string is: %s\n",Brr);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases successfully handled by the application
//
//  Input:
//  Enter string:
//  Marvellous Python 2
//  Output:
//  Updated string is: mARVELLOUS pYTHON 2
//
//  Input:
//  Enter string:
//  India is my country
//  Output:
//  Updated string is: iNDIA IS MY COUNTRY
//
//  Input:
//  Enter string:
//  HELLO all
//  Output:
//  Updated string is: hello ALL
//
/////////////////////////////////////////////////////////////////////////////////////////////////
