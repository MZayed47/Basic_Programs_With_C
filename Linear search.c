#include<stdio.h>
int main()
{
    int a[20],n,i,v;
    printf("Number of elements in array : ");
    scanf("%d",&n);
    printf("Enter elements : \n");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    if(n==0){
        printf("Array is empty.\n");
    }
    else{
        printf("Enter search value : \n");
        scanf("%d",&v);
        for(i=0; i<=n; i++){
            if(a[i]==v){
                printf("Value found.\n");
                exit(0);
            }
            else if(i>=n){
                printf("Value not found.\n");
            }
        }
    }
    return 0;
}
