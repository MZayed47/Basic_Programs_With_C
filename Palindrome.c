#include <stdio.h>
int main()
{
    long long int n, reverse=0, rem,temp;
    printf("Enter an integer: ");
    scanf("%lld", &n);
    temp=n;
    while(temp!=0){
        rem = temp % 10;
        reverse = reverse*10 + rem;
        temp /= 10;
    }
    if(reverse==n)
        printf("%d is a palindrome.",n);
    else
        printf("%d is not a palindrome.",n);
    return 0;
}
