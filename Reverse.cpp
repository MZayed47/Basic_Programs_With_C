#include <stdio.h>
int main ()
{
    long long int n, reverse=0;
    printf("Please enter a number : ");
    scanf("%lld",&n);
    while (n!=0){
        reverse = reverse * 10;
        reverse = reverse + n%10;
        n = n/10;
    }
    printf("Reverse of entered number is : %d \n",reverse);
    return 0;
}

