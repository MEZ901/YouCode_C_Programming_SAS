/*Challenge 9:

Write a c program to find the power of a number using while loops . The base number (>0) and the exponent (>=0) are taken from the test cases.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, exponent;
    int i = 1;
    printf("enter the number: "); scanf("%d", &number);
    printf("enter the exponent: "); scanf("%d", &exponent);
    if(number>0 && exponent>=0){
       while(exponent>0){
        i = number * i;
        exponent--;
        }
        printf("%d", i);
    } else printf("error");
    return 0;
}
