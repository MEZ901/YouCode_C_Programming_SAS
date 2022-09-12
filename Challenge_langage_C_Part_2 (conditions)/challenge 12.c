/*Challenge 12:

Write a C program that reads the coordinates of the two endpoints of a segment, and then reads the coordinates of a point in the plane and says whether the latter is on the segment or not.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1, y1;
    float x2, y2;
    float x, y;
    float a, b;

    printf("the first endpoint of a segment:\n");
    printf("enter x1: "); scanf("%f", &x1);
    printf("enter y1: "); scanf("%f", &y1);
    printf("the second endpoint of a segment:\n");
    printf("enter x2: "); scanf("%f", &x2);
    printf("enter y2: "); scanf("%f", &y2);
    printf("the point: \n");
    printf("enter x: "); scanf("%f", &x);
    printf("enter y: "); scanf("%f", &y);

    a=(y2 - y1)/(x2 - x1);
    b=(y2 - y)/(x2 - x1);

    if(a==b){
        printf("the point is on the sigment.");
    }else{
        printf("the point is not on the sigment.");
    }

    return 0;
}
