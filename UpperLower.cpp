#include <stdio.h>
#include <ctype.h>
int main()
{
    char alphabet;
    printf("Please enter an alphabet = ");
    alphabet=getchar();
    if(islower(alphabet))
    putchar(toupper(alphabet));
    if(isupper(alphabet))
    putchar(tolower(alphabet));
    return 0;
}
