///////////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : DisplayASCII
//  Description     : It displays ASCII table, table contains symbol, decimal, hexadecimal and octal representation of
//                    every number from 0 to 255.
//  Input           : Void
//  Output          : Void
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 28/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////

void DisplayASCII()
{
    printf("ASCII Table (0-255)\n");
    printf("--------------------------------------------------\n");
    printf("Decimal\tHex\tOctal\tChar\n");
    printf("--------------------------------------------------\n");

    for (int i = 0; i <= 255; i++) {
        if(i < 32 || i == 127)
        {
            printf("%d\t%o\t%X\t-\n", i, i, i);
        }
        else
        {
            printf("%d\t%o\t%X\t%c\n", i, i, i, i);
        }
    }

    printf("--------------------------------------------------\n");
}

///////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    DisplayASCII();

    return 0;
}