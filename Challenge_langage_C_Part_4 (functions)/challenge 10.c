/*Challenge 10:

Write a C program that displays the squares of the elements of an array of integers using the following two methods: the first is based on a Display Square function which takes the array as a parameter and displays the squares of all its elements, and the second uses a Square function which displays the square of an integer entered as a parameter.*/

#include <stdio.h>

int i;
int arr[100];

int square(){
    return arr[i] * arr[i];
}

int main()
{
    int n;
    printf("enter how many numbers you want in array: "); scanf("%d", &n);
    printf("enter the numbers: \n");
    for(i=0; i<n; i++) scanf("%d", &arr[i]);
    printf("the squares of the numbers: ");
    for(i=0; i<n; i++) printf("%d ", square(arr[i]));
    return 0;
}
