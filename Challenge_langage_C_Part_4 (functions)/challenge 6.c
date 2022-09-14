/*Challenge 6:

Write a C program to sort a list of items using the bubble sort algorithm.*/

#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int n)
{
    int x, i, t;
    int num[50];
    printf("enter the value of elements: \n");
    for(x=0; x<n; x++) scanf("%d", &num[x]);
    for(x=0; x<n-1; x++){
        for(i=0; i<n-x-1; i++){
            if(num[i]>num[i+1]){
                t = num[i];
                num[i] = num[i+1];
                num[i+1] = t;
            }
        }
    }
    printf("the after implementing bubble sort: ");
    for(x=0; x<n; x++) printf("%d ", num[x]);
}

int main()
{
    int n;
    printf("enter the number of elements you want: "); scanf("%d", &n);
    bubbleSort(n);
    return 0;
}
