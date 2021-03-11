#include<iostream>
using namespace std;

class myclass
{
    int i;
public:
    myclass(int n){  i=n;  }
    int get_i(){  return i;  }
};

int sqr_it(myclass obj)
{
    return obj.get_i()*obj.get_i();
}

int main()
{
    myclass input(10);
    cout<<sqr_it(input)<<endl;
}
