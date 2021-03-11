#include<iostream>
using namespace std;

class myclass
{
    int a,b;
public:
    myclass(){  a=0; b=0;  }
    myclass(int x, int y){  a=x; b=y;}
    void get_xy(int &i, int &j){  i=a; j=b;  }
    myclass operator+(myclass obj);
};

myclass myclass::operator+(myclass obj)
{
    myclass temp;
    temp.a = a + obj.a;
    temp.b = b + obj.b;
    return temp;
}

int main()
{
    myclass obj1(10,20),obj2(5,6),obj3;
    int m,n;
    obj3=obj1+obj2;
    obj3.get_xy(m,n);
    cout<<"(obj1+obj2) A: "<<m<<" B: "<<n<<endl;
    return 0;
}
