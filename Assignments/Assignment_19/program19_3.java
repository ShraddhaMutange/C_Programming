//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////

package Assignments.Assignment_19;   
import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   CheckDivisible
//  Description     :   It is used to find whenther given number is divisible by 5 and 11 or not
//  Input           :   Int
//  Output          :   Boolean
//  Author          :   Shraddha Dhananjay Mutange
//  Date            :   02/11/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    boolean CheckDivisible(int iNo)
    {
        if(iNo % 5 == 0 && iNo % 11 == 0)
        {
            return true;
        }       

        return false;
    } // End of CheckDivisible
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

class program19_3
{
    public static void main(String[] args) {
        int iValue = 0;
        boolean bRet = false;

        Scanner scanner = new Scanner(System.in);
        Logic obj = new Logic();

        System.out.println("Enter number : ");
        iValue = scanner.nextInt();

        bRet = obj.CheckDivisible(iValue);

        if(bRet == true)
        {
            System.out.println("Divisible");
        }
        else
        {
            System.out.println("Not divisible");
        }

        scanner.close();        
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   55      Output  :   Divisible
//  Input   :   500     Output  :   Not divisible
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 