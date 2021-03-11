#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    cout<<str<<endl;
    cout<<str.length()<<endl;
    cout<<str.at(6)<<endl;

    string str2;
    cin>>str2;
    cout<<str.append(str2)<<endl;

    return 0;
}
