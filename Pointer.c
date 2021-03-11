/*
    p is the address of *p.
    *p is the value stored in that address.

    We can store the value of a variable in p.
    We can not store a value directly into p.
*/

#include<stdio.h>
int main()
{
    int x,y;
    int *p,*q;

    x = 2;
    y = 6;

    p = &x;              ///  we can also use *p = 2; *q = 6;
    q = &y;

    printf("%d  %d\n",*p,*q);

}
