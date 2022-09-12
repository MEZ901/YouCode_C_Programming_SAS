/*Challenge 10: Circumference of a circle

Write a program to find the circumference of a circle. Take the radius of the circle as user input.

The formula for, the circumference of the circle = 2pr ; where r is the radius.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r, circumference;
    printf("enter the radius of the circle: "); scanf("%f", &r);
    circumference = 2*3.14*r;
    printf("the circumference of the circle: %f", circumference);
    return 0;
}
