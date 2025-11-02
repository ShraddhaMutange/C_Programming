//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////

package Assignments.Assignment_19;   
import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   CheckLeap
//  Description     :   It is used to find whenther given year is leap or not
//  Input           :   Int
//  Output          :   Boolean
//  Author          :   Shraddha Dhananjay Mutange
//  Date            :   02/11/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    boolean CheckLeap(int iNo)
    {
        if(iNo % 4 == 0)
        {
            return true;
        }       

        return false;
    } // End of CheckLeap
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

class program19_1
{
    public static void main(String[] args) {
        int iValue = 0;
        boolean bRet = false;

        Scanner scanner = new Scanner(System.in);
        Logic obj = new Logic();

        System.out.println("Enter year : ");
        iValue = scanner.nextInt();

        bRet = obj.CheckLeap(iValue);

        if(bRet == true)
        {
            System.out.println(iValue + " is a leap year");
        }
        else
        {
            System.out.println(iValue + " is not a leap year");
        }

        scanner.close();        
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   2024        Output  :   2024 is a leap year
//  Input   :   2025        Output  :   2025 is not a leap year
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 