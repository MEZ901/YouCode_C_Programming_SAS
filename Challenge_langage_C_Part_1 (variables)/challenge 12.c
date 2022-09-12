/*Challenge 12: Three-digit whole number in reverse order

Write a C program to display a three-digit integer in reverse order without using the loop. For example, if the whole number is 234, its inverse is 432.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char num[3];
    printf("enter three numbers: "); scanf("%s", &num);
    printf("the revers: %c%c%c", num[2], num[1], num[0]);
    return 0;
}
