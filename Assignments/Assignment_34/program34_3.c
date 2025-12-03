///////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : Display
//  Description     : It accepts a character from the user. If char is capital then display all the characters from the input character till Z. If input character is small then print all the characters in reverse order from input to a. In other cases return directly.
//  Input           : Char
//  Output          : Void
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 28/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    int iCnt = 0;

    if (ch >= 'A' && ch <= 'Z')
    {
        for (iCnt = ch; iCnt <= 'Z'; iCnt++)
        {
            printf("%c\t", iCnt);
        }
        printf("\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        for (iCnt = ch; iCnt >= 'a'; iCnt--)
        {
            printf("%c\t", iCnt);
        }
        printf("\n");
    }
    else
    {
        printf("%c\n", ch);
    }
} // End of Display

///////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char ch = '\0';

    printf("Enter a character : \n");
    scanf("%c", &ch);

    Display(ch);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases handled succesfully by the application
//
//  Input   :   S       Output  :   S	T	U	V	W	X	Y	Z
//  Input   :   h       Output  :   h	g	f	e	d	c	b	a
//  Input   :   4       Output  :   4
//  Input   :   $       Output  :   $
//
///////////////////////////////////////////////////////////////////////////////////////