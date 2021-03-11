#include <stdio.h>
int main()
{
    char ch;
    float x,y;
    printf("Please enter an operator '+' or '-' or '*' or '/' : \n");
    scanf("%c",&ch);
    printf("Please enter the value of x and y : \n");
    scanf("%f%f",&x,&y);
    switch(ch)    {
        case'+':
        printf("\n %f+%f=%f \n",x,y,x+y);
        break;
        case'-':
        printf("\n %f-%f=%f \n",x,y,x-y);
        break;
        case'*':
        printf("\n %f*%f=%f \n",x,y,x*y);
        break;
        case'/':
        printf("\n %f/%f=%f \n",x,y,x/y);
        break;
    }
    return 0;
}
