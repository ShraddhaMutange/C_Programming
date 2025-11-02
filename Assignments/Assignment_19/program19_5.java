//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////

package Assignments.Assignment_19;   
import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   CalculatePower
//  Description     :   It is used to calculate power of a number using loops
//  Input           :   Int, Int
//  Output          :   Int
//  Author          :   Shraddha Dhananjay Mutange
//  Date            :   02/11/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    int CalculatePower(int iBase, int iExp)
    {
        int iAns = 1;
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iExp; iCnt++)
        {
            iAns = iAns * iBase;
        }

        return iAns;
    } // End of CalculatePower
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

class program19_5
{
    public static void main(String[] args) {
        int iValue1 = 0, iValue2 = 0;
        int iRet = 0;

        Scanner scanner = new Scanner(System.in);
        Logic obj = new Logic();

        System.out.println("Enter base number : ");
        iValue1 = scanner.nextInt();

        System.out.println("Enter exponential number : ");
        iValue2 = scanner.nextInt();

        iRet = obj.CalculatePower(iValue1, iValue2);

        System.out.println(iValue1 + "^" + iValue2 + " = " + iRet);


        scanner.close();        
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   2   4        Output  :   16
//  Input   :   5   3        Output  :   125
//  Input   :   4   4        Output  :   256
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 