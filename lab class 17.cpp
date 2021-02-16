/// compare with two data members

#include<iostream>
using namespace std;
class cmp
{
public:
    int min(int a,int b)
    {
        if(a<b)
            return a;
        else
            return b;
    }
    double min(double j,double g)
    {
        if(j<g)
            return j;
        else
            return g;
    }
    char min(char s,char y)
    {
        if(s<y)
            return s;
        else
            return y;
    }
};
int main()
{
    cmp x;

    int a=x.min(6,7);
    cout<<a<<" is minimum value"<<endl;

    double b=x.min(5.4,7.4);
    cout<<b<<" is minimum value"<<endl;

    char c=x.min('u','g');
    cout<<c<<" is minimum value"<<endl;

    return 0;
}

