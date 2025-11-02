//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////

package Assignments.Assignment_18;
import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   PrintOdd
//  Description     :   It is used to print all odd numbers upto given number
//  Input           :   Int
//  Output          :   Void
//  Author          :   Shraddha Dhananjay Mutange
//  Date            :   01/11/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void PrintOdd(int iNo)
    {
        int iCnt = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 != 0)
            {
                System.out.print(iCnt + "\t");
            }
        }
    } // End of PrintOdd
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

class program18_3
{
    public static void main(String[] args) {
        int iValue = 0;

        Scanner scanner = new Scanner(System.in);

        Logic obj = new Logic();

        System.out.println("Enter number : ");
        iValue = scanner.nextInt();

        obj.PrintOdd(iValue);

        scanner.close();
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   10      Output  :   1       3       5       7       9
//  Input   :   20      Output  :   1       3       5       7       9       11      13      15      17      19
//  Input   :   -10     Output  :   1       3       5       7       9
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 