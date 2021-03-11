#include<stdio.h>

int function1 (int a, int b)
{
    int x;
    printf("Square Function.\n");
    x = a*a + 2*a*b + b*b;
    return x;
}

int main()
{
    int m,p,q;
    scanf("%d%d",&p,&q);

    m = function1 (p,q);

    printf("%d\n",m);
    return 0;
}
