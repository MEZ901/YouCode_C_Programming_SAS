/*Challenge 11: Circumference of a rectangle

Write a program to find the circumference of a rectangle. Take the length and width of the rectangle as input from the user.

The formula for the circumference of a rectangle = 2*(length + width) .*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float length, width, circumference;
    printf("enter the length of rectangle: "); scanf("%f", &length);
    printf("enter the width of rectangle: "); scanf("%f", &width);
    circumference =  2*(length + width);
    printf("the circumference of a rectangle is: %f", circumference);
    return 0;
}
