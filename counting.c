#include<stdio.h>
int main()
{
    char str1[50],str2[50],ch;
    int i,j,k,counter=0;
    gets(str1);
    k = strlen(str1);
    for(i=0; i<k; i++){
        ch = str1[i] ;
        str2[i] = str1[i];
        for(j=0; j<k; j++)
        {
            if(ch==str1[j])
            {
                counter++;
            }
        }
        printf("%c occur in %d times\n",ch,counter);
        counter = 0 ;
    }
}
