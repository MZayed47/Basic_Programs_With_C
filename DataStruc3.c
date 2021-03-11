#include<stdio.h>
int main()
{
    int i,j,v,n=6,a[10]={10,20,30,40,50,60};

    printf("Update location : ");
    scanf("%d",&i);
    printf("Update value : ");
    scanf("%d",&v);

    if(i>=n){
        printf("Update is not possible.");
    }
    else{
        a[i-1]=v;
        for(j=0; j<n; j++){
            printf("%d\n",a[j]);
        }
    }
    return 0;
}
