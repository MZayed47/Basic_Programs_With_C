#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t,c;
    cin>>t;
    for(c=1; c<=t; c++){
        int n,first=0,second=1,i,next;

        cin>>n;

        for(i=1; i<=n; i++){
            if(i<=1){
                next=i;
            }
            else{
                next= first + second;
                first = second;
                second = next;
            }
            cout<<next<<"    ";
        }
        cout<<endl;
    }
    return 0;
}
