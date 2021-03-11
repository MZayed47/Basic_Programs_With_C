#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s1 = "Dept. Of ICT";
    string s2 = "ICT";
    if(strstr(s1.c_str(),s2.c_str()))
    {
        cout<<"This is a substring"<<endl;
    }
    else{
        cout<<"Not a substring"<<endl;
    }
}
