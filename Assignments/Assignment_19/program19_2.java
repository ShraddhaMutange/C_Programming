//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
//
//////////////////////////////////////////////////////////////////////////////////////////////////

package Assignments.Assignment_19;   
import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   :   DisplayGrade
//  Description     :   It is used to display grade of students based on marks
//  Input           :   Int
//  Output          :   Void
//  Author          :   Shraddha Dhananjay Mutange
//  Date            :   02/11/2025
//  
//////////////////////////////////////////////////////////////////////////////////////////////////

class Logic
{
    void DisplayGrade(int iMarks)
    {
        if(iMarks > 80 && iMarks <= 100)
        {
            System.out.println("A");
        }
        else if(iMarks > 65 && iMarks <= 90)
        {
            System.out.println("B");
        }
        else if(iMarks > 35 && iMarks <= 65)
        {
            System.out.println("C");
        }
        else
        {
            System.out.println("D");
        }
    } // End of DisplayGrade
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
//////////////////////////////////////////////////////////////////////////////////////////////////

class program19_2
{
    public static void main(String[] args) {
        int iValue = 0;

        Scanner scanner = new Scanner(System.in);
        Logic obj = new Logic();

        System.out.println("Enter marks : ");
        iValue = scanner.nextInt();

        obj.DisplayGrade(iValue);


        scanner.close();        
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input   :   75        Output  :   B
//  Input   :   99        Output  :   A
//  Input   :   25        Output  :   D
// 
////////////////////////////////////////////////////////////////////////////////////////////////// 