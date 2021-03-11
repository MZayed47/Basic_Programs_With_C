#include<stdio.h>
#include<ctype.h>
int main()
{
    FILE * pfile;
    int c;
    pfile=fopen("myfile.text","r");
    if(pfile){
        do{
            c=fgetc(pfile);
            if(isgraph(c)){
                putchar(c);
            }
        }while(c!=EOF);
        fclose(pfile);
    }

}
