/*Challenge 2: Conversion from °C to °F

Write a program that asks for the temperature in Fahrenheit and transforms it into degrees Celsius

The formula: F = (C*1.8)+32*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   double F, C;
   printf("enter the temperature in Fahrenheit: ");
   scanf("%lf", &F);
   C=(F-32)/1.8;
   printf("the temperature in Celsius : %f", C);
    return 0;
}
