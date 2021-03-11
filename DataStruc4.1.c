#include<stdio.h>
int main()
{
    int a[20],b[20],c[20],n,i,j,k,count1=0,count2=0;

    printf("Enter no of elements : ");
    scanf("%d",&n);

    printf("Enter %d elements : \n",n);
    for (i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    if(n==0){
        printf("Array is empty");
    }
    else{
        i=0;j=-1;k=-1;
        while(i<n){
        if(a[i]%2==0){
            j++;
            b[j]=a[i];
            count1++;
        }
        else{
            k++;
            c[k]=a[i];
            count2++;
        }
        i++;
        }
    }
    printf("\n");
    for(j=0; j<count1; j++){
        printf("%d\n",b[j]);
    }
    printf("\n");
    for(k=0; k<count2; k++){
        printf("%d\n",c[k]);
    }
    return 0;
}
