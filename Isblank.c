#include <stdio.h>
#include <ctype.h>
int main ()
{
    char c;
    int i=0;
    char str[]="My Name Is M. Mashrukh Zayed\n";
    while (str[i])
    {
        c=str[i];
        if (isblank(c))
            c='\n';
        putchar (c);
        i++;
    }
    return 0;
}
