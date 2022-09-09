/*Challenge 3: Permutation Under Conditions

Write a program in C to read two values. It swaps the two variables if the values ​​are not identical or if the first value is less than the second.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("enter first number: "); scanf("%d", &a);
    printf("enter second number: "); scanf("%d", &b);
    if(a == b, a < b){
        printf("%d", b);
        printf(" %d", a);
    } else{
        printf("%d", a);
        printf(" %d", b);
    }
    return 0;
}
