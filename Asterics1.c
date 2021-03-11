#include<stdio.h>

int main()
{
    int n,i,j,k,l;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(k=1; k<=i; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

