//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////

package Assignments.Assignment_20;   
import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   SumEvenNumbers
//  Description     :   It is used to calculate sum of all even numbers upto N
//  Input           :   Int
//  Output          :   Int
//  Author          :   Shraddha Dhananjay Mutange
//  Date            :   02/11/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    int SumEvenNumbers(int iNo)
    {
        int iAns = 0;
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iAns = iAns + iCnt;
            }
        }

        return iAns;
    } // End of SumEvenNumbers
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

class program20_1
{
    public static void main(String[] args) {
        int iValue = 0;
        int iRet = 0;

        Scanner scanner = new Scanner(System.in);
        Logic obj = new Logic();

        System.out.println("Enter number : ");
        iValue = scanner.nextInt();

        iRet = obj.SumEvenNumbers(iValue);

        System.out.println("Sum of even nos. : " + iRet);


        scanner.close();        
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   10      Output  :   30
//  Input   :   5       Output  :   6
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 