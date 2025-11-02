//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////

package Assignments.Assignment_20;   
import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   CheckPerfect
//  Description     :   It is used to check whether number is perfect or not
//  Input           :   Int
//  Output          :   Boolean
//  Author          :   Shraddha Dhananjay Mutange
//  Date            :   02/11/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    boolean CheckPerfect(int iNo)
    {
        int iCnt = 0;
        int iSumDivisor = 0;

        for(iCnt = 1; iCnt <= iNo/2; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iSumDivisor = iSumDivisor + iCnt;
            }
        }

        if(iSumDivisor == iNo)
        {
            return true;
        }
        
        return false;
    } // End of CheckPerfect
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

class program20_3
{
    public static void main(String[] args) {
        int iValue = 0;
        boolean bRet = false;

        Scanner scanner = new Scanner(System.in);
        Logic obj = new Logic();

        System.out.println("Enter number : ");
        iValue = scanner.nextInt();

        bRet = obj.CheckPerfect(iValue);

        if(bRet == true)
        {
            System.out.println("Perfect number");
        }
        else
        {
            System.out.println("Not perfect number");
        }

        scanner.close();        
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   10      Output  :   Not perfect number
//  Input   :   6       Output  :   Perfect number
//  Input   :   18      Output  :   Perfect number
//  Input   :   496     Output  :   Perfect number
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 