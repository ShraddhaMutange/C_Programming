//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////

package Assignments.Assignment_21;   
import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   FindDigitProduct
//  Description     :   It is used to find the product of digits in a number
//  Input           :   Int
//  Output          :   Int
//  Author          :   Shraddha Dhananjay Mutange
//  Date            :   02/11/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    int FindDigitProduct(int iNo)
    {
        int iDigit = 0;
        int iProd = 1;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iProd = iProd * iDigit;
            iNo = iNo / 10;
        }

        return iProd;
    } // End of FindDigitProduct
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

class program21_1
{
    public static void main(String[] args) {
        int iValue = 0;
        int iRet = 0;

        Scanner scanner = new Scanner(System.in);
        Logic obj = new Logic();

        System.out.println("Enter number : ");
        iValue = scanner.nextInt();

        iRet = obj.FindDigitProduct(iValue);

        System.out.println("Product of digits in "+ iValue + " is : " + iRet);


        scanner.close();        
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   1221        Output  :   4   
//  Input   :   23289       Output  :   864
//  Input   :   1234        Output  :   24
//  Input   :   5524        Output  :   200
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 