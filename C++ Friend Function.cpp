#include<iostream>
using namespace std;

class rectangle
{
    int height;
    int width;
public:
    int input(int h,int w){    height=h;width=w;   }
    int area(){    return height*width;    }

};

class cost
{
    int costrate;
public:
    void setcost(int a){   costrate=a;    }
    int totalcost(rectangle x){    return costrate*x.area();    }
};

int main()
{
    rectangle result;
    result.input(5,6);
    cost c;
    c.setcost(100);
    cout<<"Area = "<<result.area()<<endl<<"Total cost = "<<c.totalcost(result)<<endl;

    return 0;
}
