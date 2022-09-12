/*Challenge 9: Distance between two points

Write a C program to find the distance between two given points.

The distance formula is derived from the Pythagorean theorem. To find the distance between two points (x1, y1) and (x2, y2) , just use the coordinates of these ordered pairs and apply the formula. distance formula

Suppose we have two points M and N, whose coordinates are (x1, y1) and (x2, y2) respectively . Their distance can be represented by MN and can be calculated according to the formula below,

The first point (M):- (x1, y1) Second point (N): (x2, y2) Distance (MN):- √((x2-x1)² + (y2-y1)²) Example:- M = (4, 8) N = (12, 14) Then the distance between M and N is MN = √((12-4)² + (14-8)²) = √(64 + 36) = √(100) = 10*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2, D;
    printf("point A \n");
    printf("enter x1: "); scanf("%f", &x1);
    printf("enter y1: "); scanf("%f", &y1);
    printf("point B \n");
    printf("enter x2: "); scanf("%f", &x2);
    printf("enter y2: "); scanf("%f", &y2);

    D = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

    printf("the distance between A and B is: %f", D);

    return 0;
}
