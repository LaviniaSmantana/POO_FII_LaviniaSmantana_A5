#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int operator"" _Kelvin(unsigned long long int x)
{
    float C = 0.0;
    C = x - 273.15;
    return C;
   
}

int operator"" _Fahrenheit(unsigned long long int x)
{
    float C = 0.0;
    C = (x - 32) / 1.8;
    return C;
}

int main() {

    float a = 300_Kelvin;

    float b = 120_Fahrenheit;

    printf("300 Kelvin in Celsius = %d\n\n", (float)b);
    printf("120 Fahrenheit in Celsius = %d\n\n", (float)a);
   

    return 0;

}