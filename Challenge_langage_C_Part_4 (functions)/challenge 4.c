/*Challenge 4:

Create a function divededby(int n,int a) which returns the division of the two values. Use the dividedby() function to check if the number is prime and return true, otherwise it returns false.*/

#include <stdio.h>
#include <stdlib.h>

divedeby(int n, int a)
{
    int division, i, t;
    if (n>=a){
        t=1;
        division = n/a;
        for(i=2; i<division; i++){
        if(division%i == 0){ printf("false"); t=0; break; }
    }
    }
    else printf("error");

    if(t == 1) printf("true");
}


int main()
{
    int n, a;
    printf("enter the first number: "); scanf("%d", &n);
    printf("enter the second number: "); scanf("%d", &a);
    divedeby(n, a);
    return 0;
}
