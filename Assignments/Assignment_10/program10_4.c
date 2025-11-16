/////////////////////////////////////////////////////////////////////////////////
// 
//  Required header files
// 
/////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////
// 
//  Function Name   : FahrenheitToCelsius
//  Description     : It is used to accept temperature in Fahrenheit and convert it into celsius.
//  Input           : Float
//  Output          : Double
//  Author          : Shraddha Dhananjay Mutange
//  Date            : 25/10/2025
//  
/////////////////////////////////////////////////////////////////////////////////

double FahrenheitToCelsius(float fTempFht)
{
    double dTempCs = 0.0;

    dTempCs = ((fTempFht - 32) * ((double)5/9));

    return dTempCs;
} // End of FahrenheitToCelsius

//  Time complexity :   O(1)

/////////////////////////////////////////////////////////////////////////////////
// 
//  Entry point function for the application
// 
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    
    printf("Enter temperature in Fahrenheit : ");
    scanf("%f", &fValue);

    dRet = FahrenheitToCelsius(fValue);

    printf("%f F = %lf C", fValue, dRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////
// 
//  Testcases handled successfully by the application
// 
//  Input : 10          Output  : 10.000000 F = -12.222222 C
//  Input : 34          Output  : 34.000000 F = 1.111111 C
// 
/////////////////////////////////////////////////////////////////////////////////