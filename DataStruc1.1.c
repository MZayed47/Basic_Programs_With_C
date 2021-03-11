#include<stdio.h>
int main()
{
    int a[30],n,i,j;

    printf("Enter no of elements : ");
    scanf("%d",&n);

    printf("Enter %d elements : \n",n);
    for (j=0; j<n; j++){
        scanf("%d",&a[j]);
    }

    printf("Enter location of the element to be deleted : ");
    scanf("%d",&i);

    while(i<n){
        a[i-1] = a[i];
        i++;
    }
    n--;

    for (j=0; j<n; j++)
        printf("%d\n",a[j]);

    return (0);
}
