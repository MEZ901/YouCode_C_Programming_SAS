/*Challenge 6 : Palindrome

Un mot est un palindrome s'il s'écrit de la même façon si on l'écrit à l'envers. "kayak" et "laval" sont des palindromes. Ecrire un programme C qui permet de déterminer si un mot, considéré comme un tableau de caractères, est un palindrome ou non. On considérera que le tableau, d'au plus 50 éléments, est initialisé dans le programme C*/

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
