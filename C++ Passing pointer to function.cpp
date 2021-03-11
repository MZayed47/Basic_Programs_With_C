#include<iostream>
using namespace std;

int *larger(int *a,int *b)
{
    if(*a>*b){
        return a;
    }
    else{
        return b;
    }
}

int main()
{
    int m=30,n=40,*p;
    p=larger(&m,&n);
    cout<<*p<<endl;
}
