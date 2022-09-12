/*Challenge 9:

Write a C program that reads a date in the format 10/15/2021 and displays it in the following format: 15-October-2021 .*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mm, dd, yyyy;
    char *nameOfMonth[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    printf("enter the month: "); scanf("%d", &mm);
    printf("enter the day: "); scanf("%d", &dd);
    printf("enter the year: "); scanf("%d", &yyyy);

    if(mm >= 1 && mm <= 12 && dd >= 1 && dd <= 31) printf("%d-%s-%d", dd, nameOfMonth[mm - 1], yyyy);
    else printf("incorrect date.");
    return 0;
}
