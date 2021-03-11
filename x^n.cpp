#include <stdio.h>
int main ()
{
    int x,n,y=1,i;
    printf("Enter base x=");
    scanf("%d",&x);
    printf("Enter power n=");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        y*=x;
    }
    printf("\n The value of is x to the power n is %d\n",y);
    return 0;
}
