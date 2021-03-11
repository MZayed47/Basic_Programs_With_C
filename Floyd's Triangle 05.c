#include<stdio.h>

int main()
{
    int n,i,j,k,l;

    while(n>0){
        scanf("%d",&n);
        k=1;
        l=1;
        for(i=1; i<=n; i++){
            for(j=1; j<=l; j++){
                printf("%d ",k);
                k+=2;
            }
            l = l+2;
            printf("\n");
        }
    }
    return 0;
}
