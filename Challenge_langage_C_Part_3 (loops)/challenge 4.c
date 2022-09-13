/*Challenge 4:

Write a C program that reads a series of positive integers less than 100 terminated by 0 . And which should disregard any input strictly greater than 100 . Then calculates and displays the sum and the max of the elements of this series.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, sum, max, k;
    max = 0;
    sum = 0;
    i = 0;
    printf("how many numbers you'll enter: "); scanf("%d", &k);
    while(i<k){
    	printf("enter the number: "); scanf("%d", &num);
    	if(num == 0) break;
    	else if(num < 0 || num > 100) continue;
    	else{ sum+=num; if(max < num) max = num;}
    	
	}
	printf("the sum of the numbers: %d\n", sum);
	printf("the max of the numbers: %d", max);
    return 0;
}
