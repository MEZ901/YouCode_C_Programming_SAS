/*Challenge 3:

Create a bool isPrime() function to check if a number is prime or not (note that the type of the function is bool, so you need to create your Bool type).*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(x){
    bool t = true;
    int i;
    for(i=2; i<x; i++){
        if(x%i == 0) { t=false; break; }
    }
    return t;
}

int main()
{
    int x;
    printf("enter the number: "); scanf("%d", &x);
    isPrime(x);
    if(isPrime(x)) printf("the number is prime.");
    else printf("the number is not prime.");
    return 0;
}
