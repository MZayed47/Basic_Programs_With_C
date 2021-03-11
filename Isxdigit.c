#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    char str[]="def7";
    long int number;
    if(isxdigit(str[0]))
    {
        number = strtol(str,NULL,16);
        printf("The hexadecimal number %lx is %ld\n",number,number);
    }
    return 0;
}
/* strtol(str,NULL,16) - এখানে strtol এর কাজ হলো এটা str কে int type data তে নিবে। ১৬ এখানে hexadecimal এর bit সংখ্যা।
*/
