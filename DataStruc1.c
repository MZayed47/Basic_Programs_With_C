#include<stdio.h>
int main()
{
    int i,j,n,a[10];

    printf("Enter no of elements : ");
    scanf("%d",&n);

    printf("Enter %d elements : \n",n);
    for (j=0; j<n; j++){
        scanf("%d",&a[j]);
    }

    printf("Type the location of the element you want to delete : ");
    scanf("%d",&i);

    if(i>=n){
        printf("Delete is not possible.");
    }
    else{
        for(j=i; j<n; j++){
            a[j-1]=a[j];
        }
        n=n-1;

        for(j=0; j<n; j++){
            printf("%d\n",a[j]);
        }
    }
    return 0;
}
