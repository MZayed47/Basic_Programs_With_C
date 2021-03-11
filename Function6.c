#include<stdio.h>
#include<string.h>
int count(char arr[],char ch)
{
    int ln,i,cnt=0;
    ln = strlen(arr);
    for(i=0; i<=ln; i++){
        if(arr[i]==ch){
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    char str[100],ch;
    scanf("%s %c",str,&ch);
    printf("Match Found = %d\n",count(str,ch));
}
