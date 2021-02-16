/// Car Value

#include<iostream>
using namespace std;
class car
{
    string color;
    string brand;
    int issn;
    float distance,time,Velo;
public:
    void input()
    {
        cin>>color>>brand>>issn>>distance>>time;
    }
    void calculate()
    {
        Velo=distance/time;
    }
    void output()
    {
        cout<<color<<"\n"<<brand<<"\n"<<issn<<"\n"<<Velo;
    }
};

int main()
{
    car velo;
    velo.input();
    velo.calculate();
    velo.output();
    return 0;
}
