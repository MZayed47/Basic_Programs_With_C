#include<stdio.h>

int add(int a,int b);
int abs(int a,int b);

int main()
{
    int x,p,q;

    printf("Enter two numbers:\n");
    scanf("%d%d",&p,&q);

    printf("The result is %d\n",abs(p,q));
}

int add(int a,int b)
{
    return a+b;
}

int abs(int a,int b)
{
    int m;
    m = add(a,b);

    if(m<0)
        return -m;
    else
        return m;
}
