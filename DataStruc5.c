#include<stdio.h>
int main()
{
    int a[40],b[20],c[20],m,p,n,i,j,k;

    printf("Enter maximum size of first array: ");
    scanf("%d",&m);
    printf("Elements:\n");
    for(j=0; j<m; j++){
        scanf("%d",&b[j]);
    }
    printf("Enter maximum size of second array: ");
    scanf("%d",&p);
    printf("Elements:\n");
    for(i=0; i<p; i++){
        scanf("%d",&c[i]);
    }

    for(j=0; j<m; j++){
        a[j]=b[j];
    }
    for(i=0; i<p; i++,j++){
        a[j]=c[i];
    }
    n=m+p;
    printf("Merged array:\n");
    for(k=0; k<n; k++){
        printf("%d\n",a[k]);
    }
    return 0;
}
