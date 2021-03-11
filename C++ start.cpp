#include<iostream>
using namespace std;

class rectangle{
public:
    int height;
    int width;
    int area();
};

int rectangle::area(){
    return height*width;
}

int main()
{
    rectangle result;
    cin>>result.height>>result.width;
    cout<<"Area = "<<result.area()<<endl;

    return 0;
}
