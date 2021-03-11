#include <stdio.h>
int main ()
{
    int x,y,fact=1;
    printf("Please enter a number to calculate its factorial : ");
    scanf("%d",&y);
    for(x=1;x<=y;x++){
        fact=fact*x;
    }
    printf("\n Factorial of %d is = %d \n",y,fact);
    return 0;
}
