/*Challenge 6 : Palindrome

Un mot est un palindrome s'il s'�crit de la m�me fa�on si on l'�crit � l'envers. "kayak" et "laval" sont des palindromes. Ecrire un programme C qui permet de d�terminer si un mot, consid�r� comme un tableau de caract�res, est un palindrome ou non. On consid�rera que le tableau, d'au plus 50 �l�ments, est initialis� dans le programme C*/

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
