#include<stdio.h>
int main()
{
    int a[40],b[20],c[20],m,p,n,i=-1,j=0,k=0,r,x;

    printf("Number of elements in first array : ");
    scanf("%d",&m);
    printf("Elements(sorted):\n");
    for(x=0; x<m; x++){
        scanf("%d",&b[x]);
    }
    printf("Number of elements in second array : ");
    scanf("%d",&p);
    printf("Elements(sorted):\n");
    for(x=0; x<p; x++){
        scanf("%d",&c[x]);
    }


    while(j<m && k<p){
            if(b[j]>c[k]){
                i++;
                a[i]=c[k];
                k++;
            }
            else{
                i++;
                a[i]=b[j];
                j++;
            }
        }

    if(j<m){
        for(r=j; r<m; r++){
            i++;
            a[i]=b[r];
        }
    }
    else{
        for(r=k; r<p; r++){
            i++;
            a[i]=c[r];
        }
    }

    n=m+p;
    printf("Output array:\n");
    for(x=0; x<n; x++){
        printf("%d\n",a[x]);
    }

    return 0;
}
