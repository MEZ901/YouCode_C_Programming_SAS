/*Challenge 7:

Write a C program that calculates the nth term of the Fibonacci sequence, defined as follows: Un=Un-1+Un-2 where U1=U0=1 .*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, U0, U1, Un, i;
    U0 = 0;
    U1 = 1;
    Un = U0 + U1;
    printf("enter the number: "); scanf("%d", &n);
    if(n == U0) printf("%d", U0);
    else if(n == U1) printf("%d", U1);
    else{
        for(i=3; i<=n; ++i){
            U0 = U1;
            U1 = Un;
            Un = U0 + U1;
        }
        printf("%d", Un);
    }


    return 0;
}
