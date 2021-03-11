#include<iostream>
using namespace std;

struct geometry
{
    int height,weidth;
    double h,b;
    float rad;
};

class area{
public:
    geometry g;
    int areaofrect(){  return g.height*g.weidth;  }
    double areaoftri(){  return .5*g.h*g.b;  }
    float areaofcir(){  return 3.1416*g.rad*g.rad;  }
};

int main()
{
    area result;
    cin>>result.g.height>>result.g.weidth;
    cout<<"Area of rect = "<<result.areaofrect()<<endl;
    cin>>result.g.h>>result.g.b;
    cout<<"Area of tri = "<<result.areaoftri()<<endl;
    cin>>result.g.rad;
    cout<<"Area of cir = "<<result.areaofcir()<<endl;
    return 0;
}

