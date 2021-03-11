#include<iostream>
using namespace std;

class rectangle{
    int height;
    int width;
public:
    int input(int h,int w);
    int area();
};

int rectangle::input(int h,int w)
{
    height=h;
    width=w;
}
int rectangle::area(){
    return height*width;
}

int main()
{
    rectangle result;
    result.input(5,6);
    cout<<"Area = "<<result.area()<<endl;

    return 0;
}
