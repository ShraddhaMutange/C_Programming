//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////

package Assignments.Assignment_17;
import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   PrintTable
//  Description     :   It is used to print table of number
//  Input           :   Int
//  Output          :   Void
//  Author          :   Shraddha Dhananjay Mutange
//  Date            :   01/11/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void PrintTable(int iNo)
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            System.out.println(iNo + " x " + iCnt + " = " + (iNo * iCnt));
        }
    } // End of PrintTable
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

class program17_5
{
    public static void main(String[] args) {
        int iValue = 0;

        Scanner scanner = new Scanner(System.in);
        Logic obj = new Logic();

        System.out.println("Enter number : ");
        iValue = scanner.nextInt();

        obj.PrintTable(iValue);        

        scanner.close();
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   2       Output  :   2 x 1 = 2
//                                  2 x 2 = 4
//                                  2 x 3 = 6
//                                  2 x 4 = 8
//                                  2 x 5 = 10
//                                  2 x 6 = 12
//                                  2 x 7 = 14
//                                  2 x 8 = 16
//                                  2 x 9 = 18
//                                  2 x 10 = 20
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 