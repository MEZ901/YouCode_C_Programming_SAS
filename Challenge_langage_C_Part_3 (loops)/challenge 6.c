/*Challenge 6:

In this exercise we will proceed as follows: we go through with a for loop of counter p , the integers between 2 and n , n being the number entered by the user ( line 9 ). And, each time we perform a primality test on p ( lines 11-15 ), if it turns out to be prime, we display it on the field.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p, n, i, t;
    printf("enter the number: "); scanf("%d", &n);
    for (p=2; p<=n; p++){
        t = 1;
        for (i=2; i<p; i++){
            if (p%i==0){
                t = 0;
                break;
            }
        }
        if(t==1) printf("%d ", p);
    }
    return 0;
}
