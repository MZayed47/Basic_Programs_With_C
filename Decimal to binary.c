#include <stdio.h>
int main()
{
 int  num, bin=0, dec, base = 1, rem;
 printf("Enter a decimal number\n");
 scanf("%d", &num);
 dec= num;
    while (num > 0){
        rem = num % 2;
        bin= bin + rem*base;
        num = num / 2 ;
        base = base * 10;
    }
printf(" binary= %d \n", bin);
return 0;
}
