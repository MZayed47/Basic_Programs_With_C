#include <stdio.h>
int main ()
{
    int num1,num2,x,GCD;
    printf("Enter two integers to find out their GCD : \n");
    scanf("%d%d",&num1,&num2);
    while (num2!=0){
        x = num2;
        num2 = num1%num2;
        num1 = x;
    }
    GCD = num1;
    printf("\n GCD of the two integers is %d \n", GCD);
    return 0;
}
