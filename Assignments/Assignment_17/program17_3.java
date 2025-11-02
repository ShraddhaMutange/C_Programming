//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////

package Assignments.Assignment_17;
import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   FindMax
//  Description     :   It is used to find maximum of two numbers
//  Input           :   Int, Int
//  Output          :   Int
//  Author          :   Shraddha Dhananjay Mutange
//  Date            :   01/11/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    int FindMax(int iNo1, int iNo2)
    {
        if(iNo1 > iNo2)
        {
            return iNo1;
        }
        else
        {
            return iNo2;
        }
    } // End of FindMax
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

class program17_3
{
    public static void main(String[] args) {
        int iValue1 = 0, iValue2 = 0;
        int iRet = 0;

        Scanner scanner = new Scanner(System.in);
        Logic obj = new Logic();

        System.out.println("Enter first number : ");
        iValue1 = scanner.nextInt();

        System.out.println("Enter second number : ");
        iValue2 = scanner.nextInt();

        if(iValue1 == iValue2)
        {
            System.out.println("Both are equal");
        }
        else
        {
            iRet = obj.FindMax(iValue1, iValue2);
            System.out.println(iRet + " is maximum");
        }

        scanner.close();
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   12  35      Output  :   35
//  Input   :   40  20      Output  :   40
//  Input   :   25  25      Output  :   Both are equal
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 