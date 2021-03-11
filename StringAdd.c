#include<stdio.h>
void main(){
 char fn[10] , mn[10] ,ln[10] ;
 char full_name[30] ;
 int  i, j , k , l ;
 gets(fn) ;
 gets(mn) ;
 gets(ln) ;
 for(i=0;i<strlen(fn);i++){
   full_name[i]  = fn[i] ;
 }
 for(j=i,l=0;j<i+strlen(mn);j++,l++){
    full_name[j] = mn[l] ;
 }
 for(k=j,l=0;k<j+strlen(ln);k++,l++){
    full_name[k] = ln[l] ;
 }
 puts(full_name);
}
