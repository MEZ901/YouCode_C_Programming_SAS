/*Challenge 1: Display Information

Write a program in C that will allow you to display your personal information: Last name, first name, Age, Sex and telephone number. Data is entered from the keyboard.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   char lastName[100], firstName [100], sex[100];
   int age, phoneNumber;

   //last name
   printf("enter your last name: ");
   fgets(lastName, 100, stdin);

   //first name
   printf("enter your first name: ");
   fgets(firstName, 100, stdin);

   //age
   printf("enter your age: ");
   scanf("%d", &age);

   //sex
   printf("enter your gender: ");
   scanf("%s", &sex);

   //phone number
   printf("enter your phone number: ");
   scanf("%d", &phoneNumber);

   printf("\n");

   //user information
   printf("last name: %s \n", lastName);
   printf("first name: %s \n", firstName);
   printf("age: %d \n", age);
   printf("sex: %s \n", sex);
   printf("phone number: %d", phoneNumber);
    return 0;
}
