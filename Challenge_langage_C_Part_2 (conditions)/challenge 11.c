/*Challenge 11:

Write a C program that reads two times in HH:MM:SS format, and displays one of the following messages:

The first moment comes before the second;
The second moment comes before the first;
It is the same moment.*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int HH1, MM1, SS1, HH2, MM2, SS2;

    printf("the first moment:\n");
    printf("enter the hour: "); scanf("%d", &HH1);
    printf("enter the minute: "); scanf("%d", &MM1);
    printf("enter the second: "); scanf("%d", &SS1);
    printf("the second moment:\n");
    printf("enter the hour: "); scanf("%d", &HH2);
    printf("enter the minute: "); scanf("%d", &MM2);
    printf("enter the second: "); scanf("%d", &SS2);

    if(HH1 < HH2) printf("The first moment comes before the second.");
    else if(HH1 > HH2) printf("The second moment comes before the first.");
    else if(HH1 == HH2){
        if(MM1 < MM2) printf("The first moment comes before the second.");
        else if(MM1 > MM2) printf("The second moment comes before the first.");
        else if(MM1 == MM2){
            if(SS1 < SS2) printf("The first moment comes before the second.");
            else if(SS1 > SS2) printf("The second moment comes before the first.");
            else printf("It is the same moment.");
        }
    }
    return 0;
}


//this program has worked from the first try XD
