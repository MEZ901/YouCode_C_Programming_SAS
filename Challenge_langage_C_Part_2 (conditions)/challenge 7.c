/*Challenge 7:

We want to display the grade obtained by a tudent according to the average of his marks. If he has an average strictly less than 10, he fails. If he has an average between 10 (inclusive) and 12, he gets a passing grade. If he has an average between 12 (inclusive) and 14, he gets a fair grade. If he has an average between 14 (inclusive) and 16, he gets a good grade. If he has an average higher than 16 (included) he gets a very good grade. Write the necessary instructions.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float G;
    printf("enter your grade: "); scanf("%f", &G);
    if(G < 10) printf("you failed");
    else if( G >= 10 && G < 12 ) printf("you gets a passing grade");
    else if( G >= 12 && G < 14 ) printf("you gets a fair grade");
    else if( G >= 14 && G < 16 ) printf("you gets a good grade");
    else printf("you gets a very good grade");
    return 0;
}
