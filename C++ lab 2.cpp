#include<iostream>
#include<ctime>
using namespace std;
void getsec(unsigned long *par)
{
    *par = time(0);
    return;
}
int main()
{
    unsigned long sec;
    getsec(&sec);
    cout<<"Number of seconds : "<<sec<<endl;
    return 0;
}
