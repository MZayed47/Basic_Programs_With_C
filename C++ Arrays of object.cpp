#include<iostream>
using namespace std;

class myclass
{
    int i;
public:
    void set_i(int n){  i=n;  }
    int get_i(){  return i;  }
};

int main()
{
    myclass obj[3];
    for(int x=0; x<3; x++){
        obj[x].set_i(x+1);
    }
    for(int x=0; x<3; x++){
        cout<<obj[x].get_i()<<endl;
    }
}
