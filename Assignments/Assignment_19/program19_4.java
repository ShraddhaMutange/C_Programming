//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////

package Assignments.Assignment_19;   
import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   DisplayDigits
//  Description     :   It is used to display digits of given number
//  Input           :   Int
//  Output          :   Void
//  Author          :   Shraddha Dhananjay Mutange
//  Date            :   02/11/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void DisplayDigits(int iNo)
    {
        int iDigit = 0;
        int iRev = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRev = iRev * 10 + iDigit;
            iNo = iNo / 10;
        }

        while (iRev != 0) 
        {
            iDigit = iRev % 10;
            System.out.println(iDigit + "\t");    
            iRev = iRev /10;
        }
    } // End of DisplayDigits
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

class program19_4
{
    public static void main(String[] args) {
        int iValue = 0;

        Scanner scanner = new Scanner(System.in);
        Logic obj = new Logic();

        System.out.println("Enter number : ");
        iValue = scanner.nextInt();

        obj.DisplayDigits(iValue);


        scanner.close();        
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   75        Output  :   B
//  Input   :   99        Output  :   A
//  Input   :   25        Output  :   D
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 