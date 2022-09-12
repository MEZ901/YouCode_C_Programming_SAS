/*Challenge 10:

Write a C program that randomly displays one of the days of the week.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int randomDay;
    srand(time(NULL));
    randomDay = rand() % 7;
    printf("%s", days[randomDay]);
    return 0;
}
