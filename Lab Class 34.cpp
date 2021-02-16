/// Template

#include<iostream>
using namespace std;
template<class a>
a l(a x,a y)
{
    return (x>y)?x:y;
}
int main()
{
    int i1,i2;
    float j1,j2;

    cin>>i1>>i2;
    cout<<l(i1,i2)<<endl;
    cin>>j1>>j2;
    cout<<l(j1,j2);
}
