#include<iostream>
#include<bits/stdc++.h>
using namespace std;

main()
{
    int a[100],i,n;

    cout<<"Number of elements"<<endl;
    cin>>n;
    cout<<"Elements"<<endl;
    for(i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a,a+n);

    cout<<"sorted elements"<<endl;
    for(i=0; i<n; i++){
        cout<<a[i]<<endl;
    }

}
