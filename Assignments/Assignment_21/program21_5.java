//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////

package Assignments.Assignment_21;   
import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   PrintDivisibleTwoThree
//  Description     :   It is used to print all numbers from 1 to N that are divisible by 2 and 3 both 
//  Input           :   Int
//  Output          :   Void
//  Author          :   Shraddha Dhananjay Mutange
//  Date            :   02/11/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void PrintDivisibleTwoThree(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if((iCnt % 2 == 0) && (iCnt % 3 == 0))
            {
                System.out.print(iCnt + "\t");
            }
        }
    } // End of PrintDivisibleTwoThree
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

class program21_5
{
    public static void main(String[] args) {
        int iValue = 0;

        Scanner scanner = new Scanner(System.in);
        Logic obj = new Logic();

        System.out.println("Enter number : ");
        iValue = scanner.nextInt();

        obj.PrintDivisibleTwoThree(iValue);

        scanner.close();        
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   12          Output  :  6       12
//  Input   :   50          Output  :  6       12      18      24      30      36      42      48
//  Input   :   24          Output  :  6       12      18      24
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 