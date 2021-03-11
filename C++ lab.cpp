#include<iostream>
using namespace std;

float lowest(float a[],int n)
{
    int i;
    float max = a[0];
    for(i=0; i<n; i++){
        if(a[i]>max){
            max = a[i];
        }
        return max;
    }
}

main()
{
    float val[10] = {1,2,3,4,6,7,8,-9,-7};
    cout<<lowest(val,10)<<endl;
}
