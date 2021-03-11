#include<iostream>
using namespace std;

class abc
{
    int a,b;
public:
    abc(int x,int y)
    {
        a=x; b=y;
        cout<<"I am in constructor"<<endl;
    }
    void display()
    {
        cout<<"Values:"<<"\t"<<a<<"\t"<<b<<endl;
    }
};

int main()
{
    abc obj1(20,30);
    abc obj2(100,500);
    obj1.display();
    obj2.display();
    obj2=obj1;
    obj2.display();
}
