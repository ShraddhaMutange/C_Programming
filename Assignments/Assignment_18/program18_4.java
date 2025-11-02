//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////

package Assignments.Assignment_18;   
import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   SumEvenOddDigits
//  Description     :   It is used to find sum of even and odd digits separately in a number
//  Input           :   Int
//  Output          :   Void
//  Author          :   Shraddha Dhananjay Mutange
//  Date            :   01/11/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void SumEvenOddDigits(int iNo)
    {
        int iDigit = 0;
        int iSumEven = 0;
        int iSumOdd = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while (iNo != 0) 
        {
            iDigit = iNo % 10;

            if(iDigit % 2 == 0)
            {
                iSumEven = iSumEven + iDigit;
            }
            else
            {
                iSumOdd = iSumOdd + iDigit;
            }

            iNo = iNo / 10;
        }

        System.out.println("Addition of even digits is : " + iSumEven);
        System.out.println("Addition of odd digits is : " + iSumOdd);
    } // End of SumEvenOddDigits
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

class program18_4
{
    public static void main(String[] args) {
        int iValue = 0;

        Scanner scanner = new Scanner(System.in);

        Logic obj = new Logic();

        System.out.println("Enter number : ");
        iValue = scanner.nextInt();

        obj.SumEvenOddDigits(iValue);

        scanner.close();
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   111222      Output  :   Addition of even digits is : 6
//                                      Addition of odd digits is : 3
//  Input   :   -236541     Output  :   Addition of even digits is : 12
//                                      Addition of odd digits is : 9
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 