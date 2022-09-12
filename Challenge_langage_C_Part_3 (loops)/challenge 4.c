/*Challenge 4:

Write a C program that reads a series of positive integers less than 100 terminated by 0 . And which should disregard any input strictly greater than 100 . Then calculates and displays the sum and the max of the elements of this series.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, sum= 0, max=0;
    printf("enter the number: "); scanf("%d", &num);
    do {
        sum+=num;
        if(max<num) max = num;
        printf("enter the number: "); scanf("%d", &num);
    }while(num>0 && num<100);
    printf("sum = %d\n", sum);
    printf("max = %d\n", max);
    return 0;
}
