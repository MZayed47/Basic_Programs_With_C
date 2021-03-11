
#include<stdio.h>

void inc (int *a)
{
    (*a)++;
}

int main()
{
    int x=5;
    printf("Before increment : %d\n",x);
    inc(&x);
    printf("After increment : %d\n",x);
    return 0;
}


/*

#include<stdio.h>

int inc (int a)
{
    return a+1;
}

int main()
{
    int x=5;
    printf("Before increment : %d\n",x);
    inc(x);
    printf("After increment : %d\n",inc(x));
    return 0;
}

*/
