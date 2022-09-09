/*Challenge 2: Even or Odd

Write a program that asks for a number and displays whether that number is even or odd*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter the number: "); scanf("%d", &num);
    if(num%2 == 0){
        printf("%d is even", num);
    } else{
        printf("%d is odd", num);
    }
    return 0;
}
