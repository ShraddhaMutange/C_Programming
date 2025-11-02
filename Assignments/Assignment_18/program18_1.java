//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////

package Assignments.Assignment_18;
import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   CheckPrime
//  Description     :   It is used to check whether given number is prime or not
//  Input           :   Int
//  Output          :   Boolean
//  Author          :   Shraddha Dhananjay Mutange
//  Date            :   01/11/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    boolean CheckPrime(int iNo)
    {
        int iCnt = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 2; iCnt < iNo; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                return false;
            }
        }

        return true;
    } // End of CheckPrime
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

class program18_1
{
    public static void main(String[] args) {
        int iValue = 0;
        boolean bRet = false;

        Scanner scanner = new Scanner(System.in);

        Logic obj = new Logic();

        System.out.println("Enter number : ");
        iValue = scanner.nextInt();

        bRet = obj.CheckPrime(iValue);

        if(bRet == true)
            System.out.println(iValue + " is a Prime number");
        else
            System.out.println(iValue + " is not a Prime number");


        scanner.close();
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   1       Output  :   Prime number
//  Input   :   2       Output  :   Prime number
//  Input   :   -3      Output  :   Prime number
//  Input   :   4       Output  :   not a Prime number
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 