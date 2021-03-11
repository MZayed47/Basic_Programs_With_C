#include<iostream>
using namespace std;

class myclass
{
    int i;
public:
    myclass(int n){  i=n;  }
    int get_i(){  return i;  }
};

int main()
{
    myclass obj(100),*p;
    p=&obj;
    cout<<p->get_i()<<endl;
}
