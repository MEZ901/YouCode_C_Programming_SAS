/*Challenge 3:

Write a C program that reads an integer and then determines whether it is prime or not.

We recall that an integer is said to be prime if it has exactly two different divisors; 1 and himself.

Ex: 2, 3, 7, 17, 101 are all prime, and 4, 10, 27 are not.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, p, n=1;
    printf("enter the number: "); scanf("%d", &p);
    for(i=2; i<p; i++){
        if(p%i == 0) n = 0;
    }
    if(n == 0) printf("%d is not a prime number.", p);
    else printf("%d is a prime number.", p);


    return 0;
}
