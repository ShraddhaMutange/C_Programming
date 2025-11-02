//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   CkeckEvenOdd
//  Description     :   It is used to check whether given number is even or odd
//  Input           :   Int
//  Output          :   Bool
//  Author          :   Shraddha Dhananjay Mutange
//  Date            :   01/11/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    boolean CkeckEvenOdd(int iNo)
    {
        if(iNo % 2 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    } // End of CkeckEvenOdd
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

class program16_2
{
    public static void main(String[] args) {
        int iValue = 0;
        boolean bRet = false;

        Scanner scanner = new Scanner(System.in);

        Logic obj = new Logic();

        System.out.println("Enter number : ");
        iValue = scanner.nextInt();

        bRet = obj.CkeckEvenOdd(iValue);

        if(bRet == true)
        {
            System.out.println(iValue + " is Even");
        }
        else
        {
            System.out.println(iValue + " is Odd");
        }

        scanner.close();
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   100     Output  :   100 is Even
//  Input   :   111     Output  :   111 is Odd
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 