#include<iostream>
using namespace std;

int *abc(int a[],int n)
{
    for(int i=0; i<n; i++){
        a[i]=i;
    }
    return a;
}

int main()
{
    int value[10],x,*p;
    p=abc(value,5);
    for(x=0; x<5; x++){
        cout<<value[x]<<"\t"<<p<<endl;
        p++;
    }
}
