#include<iostream>
using namespace std;

class myclass
{
    int i;
public:
    myclass(int n);
    ~myclass();
    void set_i(int x){  i=x;  }
    int get_i(){  return i;  }
};

myclass::myclass(int n)
{
    i=n;
    cout<<"Constructing : "<<i<<endl;
}
myclass::~myclass()
{
    cout<<"Destructing : "<<i<<endl;
}

void f(myclass obj);

int main()
{
    myclass result(1);
    f(result);
    cout<<"This is i in main : "<<result.get_i()<<endl;
}

void f(myclass obj)
{
    obj.set_i(2);
    cout<<"This is i in local : "<<obj.get_i()<<endl;
}
