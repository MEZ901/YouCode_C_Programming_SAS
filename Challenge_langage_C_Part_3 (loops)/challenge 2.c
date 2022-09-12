/*Challenge 2: star pyramid

Write the program to have a star pyramid, the number of lines to compose is asked to the user. (each line must have a prime number of stars)*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, space, row, k = 0;
    printf("enter the number of lines: "); scanf("%d", &row);
    for(i=1; i<=row; i++, k=0){
        for(space=1; space<=row-i; space++){
            printf("  ");
        }

        while(k!=2*i-1){
            printf("* ");
            k++;
        }
    printf("\n");

    }

    return 0;
}
