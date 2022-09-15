/*Challenge 2:

Create a swap() function to swap the value of a with the value of b, what do you see? also display the initial state of variables a and b.*/

#include <stdio.h>
#include <stdlib.h>
int a, b;
void swap (){
    a = a+b;
    b = a-b;
    a = a-b;

}
int main()
{

    printf("enter a: "); scanf("%d", &a);
    printf("enter b: "); scanf("%d", &b);
    printf("the initial state of a: %d\n", a);
    printf("the initial state of b: %d\n", b);
    swap();
    printf("the new state of a: %d\n", a);
    printf("the new state of b: %d", b);
    return 0;
}
