//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////

package Assignments.Assignment_20;   
import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   FindLargestDigit
//  Description     :   It is used to find the largest digit in a number
//  Input           :   Int
//  Output          :   Int
//  Author          :   Shraddha Dhananjay Mutange
//  Date            :   02/11/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    int FindLargestDigit(int iNo)
    {
        int iDigit = 0;
        int iMax = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            
            if(iDigit > iMax)
            {
                iMax = iDigit;
            }

            iNo = iNo / 10;
        }

        return iMax;
    } // End of FindLargestDigit
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

class program20_4
{
    public static void main(String[] args) {
        int iValue = 0;
        int iRet = 0;

        Scanner scanner = new Scanner(System.in);
        Logic obj = new Logic();

        System.out.println("Enter number : ");
        iValue = scanner.nextInt();

        iRet = obj.FindLargestDigit(iValue);

        System.out.println("Largest digit: "+ iRet);


        scanner.close();        
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   1221        Output  :   2
//  Input   :   23289       Output  :   9
//  Input   :   5624        Output  :   6
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 