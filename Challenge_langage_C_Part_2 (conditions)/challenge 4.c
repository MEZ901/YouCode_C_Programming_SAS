/*Challenge 4:

Write a C program to calculate the sum of two given integer values. If the two values ​​are the same, it returns triple their sum.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, sum;
    printf("enter the first number: "); scanf("%d", &a);
    printf("enter the second number: "); scanf("%d", &b);
    if(a == b){
        sum = (a+b)*3;
    } else {
        sum = a+b;
    }
    printf("%d", sum);
    return 0;
}
