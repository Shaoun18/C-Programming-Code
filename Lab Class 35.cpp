/// Class Template

#include<iostream>
using namespace std;
template<class I,class F ,class D>
class calculate{
private:
    I a;
    D b;
    F q;
public:
    calculate(I j,F r,D k)
    {
        a=j;
        b=k;
        q=r;
    }
    int display_area()
    {
        cout<<"Area of circle:"<<b*a*a<<endl;
    }
    int display_square()
    {
        cout<<"Area of square:"<<a*a<<endl;
    }
};
int main()
{
    calculate<int,float,double>ob(2,3.1416,3.5);
    ob.display_area();
    ob.display_square();
}
