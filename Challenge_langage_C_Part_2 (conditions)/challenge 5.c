/*Challenge 5: Second degree equation

Write a C program that calculates the possible solutions of a 2nd degree equation.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, delta, x;
    printf("enter a: "); scanf("%f", &a);
    printf("enter b: "); scanf("%f", &b);
    printf("enter c: "); scanf("%f", &c);
    delta = pow(b, 2)-4*a*c;
    printf("delta = %f\n", delta);
    if(delta > 0){
        printf("delta greater than 0 so there is two solution:\n");
        x = (-b-sqrt(delta))/2*a;
        printf("%f", x);
        x = (-b+sqrt(delta))/2*a;
        printf("  ,  %f", x);
    } else if(delta == 0){
        printf("delta equals 0 so there is only one solution:\n");
        x = (-b)/2*a;
        printf("x");
    } else{
        printf("there is no real solution");
    }

    return 0;
}
