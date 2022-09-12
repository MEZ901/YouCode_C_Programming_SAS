/*Challenge 4: Convert Mile to Km

Write a program that asks for the distance in Miles and transforms it into Meters

The formula: Km = Mile/1.609

(take metric conversion into account)*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
   double mile, meter;
   printf("enter the distance in mile: ");
   scanf("%lf", &mile);
   meter = mile*1609;
   printf("the distance in meter is: %f", meter);
    return 0;
}
