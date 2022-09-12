/*Challenge 8:

Write a C program that reads a character and determines whether it is an alphabet or not. And if it is, say in addition if it is a lower case or a capital letter.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char character;
    printf("enter the character: "); scanf("%c", &character);
    if (character >= 'a' && character <= 'z'){
        printf("%c is an alphabet and it's a lower case.", character);
    } else if (character >= 'A' && character <= 'Z'){
        printf("%c is an alphabet and it's a capital letter.", character);
    } else{
        printf("%c is not an alphabet.", character);
    }
    return 0;
}
