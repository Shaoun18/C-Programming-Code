#include<iostream>
using namespace std;
class coord
{
    int x,y;
public :
    coord()
    {
       x = 0;
       y = 0;
    }
    coord(int i,int j)
    {
        x = i;
        y = j;
    }
    void get_xy(int &i,int &j)
    {
        i = x;
        j = y;
    }
    coord operator + (coord ob2);
    coord  operator -(coord ob2);
    coord operator = (coord ob2);
};
coord coord :: operator + (coord ob2)
{
    coord temp;
    temp.x = x + ob2.x;
    temp.y = y + ob2.y;
    return temp;
}
coord coord :: operator - (coord ob2)
{
    coord temp;
    temp.x = x - ob2.x;
    temp.y = y - ob2.y;
    return temp;
}
coord coord :: operator = (coord ob2)
{
    x = ob2.x;
    y = ob2.y;
    return this;
}
int main()
{
    coord 01(10,10),02(5,3),03;
    int x,y;
    03 = 01 + 02;
    03.get_xy(x, y);
    cout<<"(01+02) X:" << x << ",Y :"<<y<<"\n";
    03 = 01 - 02;
    03.get_xy(x, y);
    cout<<"(01-02) X:" << x << ",Y :"<<y<<"\n";
    03 = 01;
    03.get_xy(x,y);
    cout<<"(03+01) X: " << x << "Y : " << y << "\n";
    return 0;
}

