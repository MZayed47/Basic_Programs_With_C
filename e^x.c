#include <stdio.h>
#define ACCURACY 0.001
int main()
{    int n,count;
    float x,sum,term;
    printf("Enter value of x:\n");
    scanf("%f",&x);
    n=term=count=sum=1;
    while(n<=100){
    term=term*x/n;
    sum=term+sum;
    count=count+1;
    if(term<ACCURACY)
    n=999;
    else
        n++;
    }
    printf("Term=%d    Sum=%f",count,sum);
    return 0;
}
