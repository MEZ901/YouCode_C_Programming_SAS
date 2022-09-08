/*Challenge 3: Convert Mile to Km

Write a program that asks for the distance in Meter and transforms it in Mile

The formula: Mile = Km*1.609

(take metric conversion into account)*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   double mile, meter;
   printf("enter the distance in meter: ");
   scanf("%lf", &meter);
   mile = meter/1609;
   printf("the distance in mile is: %f", mile);
    return 0;
}
