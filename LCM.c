#include <stdio.h>
int main ()
{
    int num1,num2,x,GCD,a,b,LCM;
    printf("Enter two integers to find out their LCM : \n");
    scanf("%d%d",&num1,&num2);
    a = num1;
    b = num2;
    while (num2!=0){
        x = num2;
        num2 = num1%num2;
        num1 = x;
    }
    GCD = num1;
    LCM = (a*b)/GCD;
    printf("\n LCM of the two integers is %d \n", LCM);
    return 0;
}
