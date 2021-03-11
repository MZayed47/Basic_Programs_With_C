/*  <cassert>

    Assert - কোনো কিছু সত্য বলে দাবি করা।
    int b=10;
    int *c=null;
    print_Num(b);
    print_Num( );
    print_Num(int *num){
        assert(!(num==null));
    }
*/
#include<stdio.h>
#include<assert.h>

void print_number(int * myInt)
{
    assert (myInt!=NULL);
    printf ("%d\n",*myInt);
}

int main()
{
    int a=10;
    int * b = NULL;
    int * c = NULL;

    b=&a;

    print_number (b);
    print_number (c);

    return 0;
}
