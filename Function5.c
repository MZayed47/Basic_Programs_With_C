#include<stdio.h>
void abc(int arr1[],int *x)
{
    printf("Before change, in defined function a[3] = %d %d\n",arr1[3],*x);
    arr1[3] = 99;
    *x = 6;
    printf("After change, in defined function a[3] = %d %d\n",arr1[3],*x);
}

int main()
{
    int arr[5]={11,22,33,44,55},a=4;
    printf("Before change, in main function a[3] = %d %d\n",arr[3],a);
    abc(arr,&a);
    printf("After change, in main function a[3] = %d %d\n",arr[3],a);
}
