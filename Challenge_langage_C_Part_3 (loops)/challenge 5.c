/*Challenge 5:

Write a C program that reads an integer and displays it inverted. We will choose not to display digit by digit but to build the inverted integer and then display it.

Eg: if the input is 12345 we must display the integer 54321 .*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char num[10];
    int length, i;
    printf("enter the number: "); scanf("%s", &num);
    length = strlen(num);
    for(i=0; i<=length-1; i++){
        if(num[length-1-i] >= 'A' && num[length-1-i] <= 'Z' || num[length-1-i] >= 'a' && num[length-1-i] <= 'z') break;
        else printf("%c", num[length-1-i]);
    }

    return 0;
}
