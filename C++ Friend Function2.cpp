#include<iostream>
using namespace std;

class rectangle
{
    int height;
    int width;
public:
    int input(int h,int w){    height=h;width=w;   }
    friend class cost;
};

class cost
{
    int costrate;
public:
    void setcost(int a){   costrate=a;    }
    int area(rectangle A){    return A.height*A.width;    }
    int totalcost(rectangle x){    return costrate*x.height*x.width;    }
};

int main()
{
    rectangle result;
    result.input(5,6);
    cost c;
    c.setcost(100);
    cout<<"Area = "<<c.area(result)<<endl<<"Total cost = "<<c.totalcost(result)<<endl;

    return 0;
}

