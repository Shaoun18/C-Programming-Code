/// swaping

#include<iostream>
using namespace std;
template<class b>
b s(b &x,b &y)
{
    b tem;
    tem=x;
    x=y;
    y=tem;

}
int main()
{
    int i1,i2;
    float j1,j2;
    double k1,k2;

    cin>>k1>>k2;
    s(k1,k2);

    cout<<"After swap valu k1: "<<k1<<"\nAfter swap value k2: "<<k2;

    return 0;

}
