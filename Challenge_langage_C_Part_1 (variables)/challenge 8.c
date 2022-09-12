/*Challenge 8: Average and sum of 4 numbers

Write a C program to find the sum and average of four numbers. Take input from the end user.

Explanation :

Given three numbers a, b and c then, Sum = (a+b+c) and, Average = sum/3*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;
    printf("enter first number: "); scanf("%f", &a);
    printf("enter second number: "); scanf("%f", &b);
    printf("enter third number: "); scanf("%f", &c);


    printf("sum = %f \n", (a+b+c));
    printf("average = %f",(a+b+c)/3);


    return 0;
}
