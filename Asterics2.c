#include<stdio.h>

int main()
{
    int n,i,j,k,l;

    while(n>0){
        scanf("%d",&n);
        for(i=0; i<n; i++){
            for(j=n-i; j>=1; j--){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
