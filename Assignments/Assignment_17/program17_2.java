//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////

package Assignments.Assignment_17;
import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   CheckPalindrome
//  Description     :   It is used to check whether given number is palindrome or not
//  Input           :   Int
//  Output          :   Boolean
//  Author          :   Shraddha Dhananjay Mutange
//  Date            :   01/11/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    boolean CheckPalindrome(int iNo)
    {
        int iOriginal = iNo;
        int iRev = 0;

        while(iNo != 0)
        {
            int digit = iNo % 10;
            iRev = iRev * 10 + digit;
            iNo = iNo / 10;
        }

        if(iOriginal == iRev)
        {
            return true;
        }

        return false;
    } // End of CheckPalindrome
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

class program17_2
{
    public static void main(String[] args) {
        int iValue = 0;
        boolean bRet = false;

        Scanner scanner = new Scanner(System.in);

        Logic obj = new Logic();

        System.out.println("Enter number : ");
        iValue = scanner.nextInt();

        bRet = obj.CheckPalindrome(iValue);

        if(bRet == true)
            System.out.println(iValue + " is a Palindrome number");
        else
            System.out.println(iValue + " is not a Palindrome number");


        scanner.close();
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   12341       Output  :   12341 is not a Palindrome number
//  Input   :   1221        Output  :   1221 is a Palindrome number
//  Input   :   121         Output  :   121 is a Palindrome number
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 