/// Constructor

#include<iostream>
using namespace std;
class Acceleration
{
public:
    int v;
    int s;
    Acceleration()
    {
        v=50;
        s=5;
    }
    int cal_acc()
    {
        int r=v/s;
        return r;
    }
};
class Mass
{
public:
    int m;
    Mass()
    {
        cin>>m;
    }
};
class Force:public Mass
{
public:
    int result;
    void calculate(int f)
    {
        result=f*m;
    }
    void output()
    {
        cout<<result;
    }
};
int main()
{
    int x;
    Acceleration a;
    Force b;
    x=a.cal_acc();
    b.calculate(x);
    b.output();

}
