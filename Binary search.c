#include<stdio.h>
int main()
{
    int a[20],v,beg,end,mid,n,i;
    printf("Number of elements in array : ");
    scanf("%d",&n);
    printf("Enter elements <sorted> :\n");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    if(n==0){
        printf("Array is empty.\n");
    }
    else{
        printf("Enter search value :\n");
        scanf("%d",&v);
        beg=0;
        end=n-1;
        mid=(beg+end)/2;

        repeat:
        if(a[mid]==v){
            printf("Value found.\n");
        }
        else{
            if(beg==end){
                printf("Value not found.\n");
            }
            else{
                if(a[mid]>v){
                    end=mid+1;
                    mid=(beg+end)/2;
                }
                else{
                    beg=mid+1;
                    mid=(beg+end)/2;
                }
                goto repeat;
            }
        }
    }
    return 0;
}
