#include<iostream>
using namespace std;

class abc
{
    int a,b;
public:
    abc(){
        a=50;
        b=100;
        cout<<"I am in constructor"<<endl;
    }
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
    abc obj1;
    abc obj2(20,30);
    obj1.display();
    obj2.display();
}
