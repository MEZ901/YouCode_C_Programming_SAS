/*Challenge 2:

Create a swap() function to swap the value of a with the value of b, what do you see? also display the initial state of variables a and b.*/

#include <stdio.h>
#include <stdlib.h>

int swap(a, b){
    int c;
    c = a;
    a = b;
    b = c;
    printf("a = %d\n", a);
    printf("b = %d\n", b);

}

int main()
{
    int a, b;
    printf("enter the first number (a): "); scanf("%d", &a);
    printf("enter the second number (b): "); scanf("%d", &b);
    swap(a, b);
    printf("the initial state of a = %d\n", a);
    printf("the initial state of b = %d\n", b);
    return 0;
}
