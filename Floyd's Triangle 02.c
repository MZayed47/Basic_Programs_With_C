#include<stdio.h>

int main()
{
    int n,i,j,k,l;

    while(n>0){
        scanf("%d",&n);
        int k=1;
        for(i=1; i<=n; i++){
            for(j=1; j<=i; j++){
                printf("%d ",k);
                k++;
            }
            printf("\n");
        }
    }
    return 0;
}
