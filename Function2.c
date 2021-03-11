#include<stdio.h>

int power (int a,int b)
{
    int i,root=1;
    for(i=1; i<=b; i++){
        root = root * a;
    }
    return root;
}

int main()
{
    int a,p,q;
    printf("Enter base : ");
    scanf("%d",&p);
    printf("Enter power : ");
    scanf("%d",&q);

    a = power(p,q);

    printf("Result is %d\n",a);

    return 0;
}
