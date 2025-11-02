//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////

package Assignments.Assignment_21;   
import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   CountEvenOddRange
//  Description     :   It is used to count even and odd numbers present between 1 to N
//  Input           :   Int
//  Output          :   Void
//  Author          :   Shraddha Dhananjay Mutange
//  Date            :   02/11/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void CountEvenOddRange(int iNo)
    {
        int iCnt = 0;
        int iEvenCount = 0;
        int iOddCount = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iEvenCount++;
            }
            else
            {
                iOddCount++;
            }
        }

        System.out.println("Total even numbers : " + iEvenCount);
        System.out.println("Total odd numbers : " + iOddCount);
    } // End of CountEvenOddRange
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

class program21_2
{
    public static void main(String[] args) {
        int iValue = 0;

        Scanner scanner = new Scanner(System.in);
        Logic obj = new Logic();

        System.out.println("Enter number : ");
        iValue = scanner.nextInt();

        obj.CountEvenOddRange(iValue);

        scanner.close();        
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   1221        Output  :  Even : 610   Odd : 611
//  Input   :   10          Output  :  Even : 5     Odd : 5
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 