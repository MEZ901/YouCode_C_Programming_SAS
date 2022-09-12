/*Challenge 6: Palindrome

A word is a palindrome if it is spelled the same if written backwards. "kayak" and "laval" are palindromes. Write a C program that determines whether a word, considered as an array of characters, is a palindrome or not. We will consider that the array, of at most 50 elements, is initialized in the C program*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char word[50]  , temp[50];
    printf("enter the word: ");
    gets(word);
    strcpy(temp , word);

    if( strcmp(temp , strrev(word)) == 0)
        printf("%s is palindrome", temp);

    else
        printf("%s is not palindrome", temp);


























}
