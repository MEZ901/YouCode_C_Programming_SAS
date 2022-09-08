/*Challenge 7: Calculate and display result in decimal format

a and b are two integers entered on the keyboard, calculate and display a+b, ab, a*b, a/b, a%b in decimal format, and taking care of the man/machine interface. (a/b gives the quotient of the division, a%b gives the remainder of the division)

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("enter first number: ");
    scanf("%d", &a);
    printf("enter second number: ");
    scanf("%d", &b);

    printf("\n");
    printf("a+b= %d \n", (a+b));
    printf("a-b= %d \n", (a-b));
    printf("a\*b= %d \n", (a*b));
    printf("a/b= %.2f \n", (float) a / (float) b);
    printf("a%b= %d", (a%b));
    return 0;
}
