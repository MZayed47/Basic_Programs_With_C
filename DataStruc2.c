#include<stdio.h>
int main()
{
    int a[10],i,j,n,v;

    printf("Enter no of elements : ");
    scanf("%d",&n);

    printf("Enter %d elements : \n",n);
    for (j=0; j<n; j++){
        scanf("%d",&a[j]);
    }

    printf("Insert position : ");
    scanf("%d",&i);
    printf("Insert value : ");
    scanf("%d",&v);

    if(i>=n){
        a[n]=v;
        n++;
    }
    else{
        for(j=n; j>=i; j--){
            a[j]=a[j-1];
        }
        a[j+1]=v;
        n++;
        for(j=0; j<n; j++){
            printf("%d\n",a[j]);
        }
    }
    return 0;
}
