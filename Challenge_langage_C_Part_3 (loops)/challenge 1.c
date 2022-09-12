/*Challenge 1: multiplication table

Write an algorithm that asks the user for a number, then displays its multiplication table from 1 to 10*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, p;
    for(i=1; i<=10; i++){
        printf("%d:\n", i);
        for(p=1; p<=10; p++) printf("%d*%d = %d\n", i, p, i*p);
    }
    return 0;
}
