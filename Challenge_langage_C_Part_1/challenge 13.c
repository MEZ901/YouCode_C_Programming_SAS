/*Challenge 13: Displaying the equivalent octal and hexadecimal value

Write a C program to display the equivalent value in octal and hexadecimal. Enter an integer and display its equivalent value in octal and hexadecimal.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter number: "); scanf("%d", &n);
    printf("\nOctal value = %o", n);
    printf("\nHexadecimal value = %x", n);
    return 0;
}
