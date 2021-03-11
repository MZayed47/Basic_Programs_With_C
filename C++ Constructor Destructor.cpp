#include<iostream>
using namespace std;

class rectangle{
    int height;
    int width;
public:
    int area(){  return height*width;  }
    rectangle(int h,int w);
    ~rectangle();
};

rectangle::rectangle(int h,int w)
{
    height=h;
    width=w;
    cout<<"Constructor "<<area()<<endl;
}
rectangle::~rectangle()
{
    cout<<"Destructor "<<area()<<endl;
}

int main()
{
    rectangle result(5,6),result1(7,8);
    cout<<"Area = "<<result.area()<<endl;

    return 0;
}
