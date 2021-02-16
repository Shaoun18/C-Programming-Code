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
    void get_xy()
    {
        cout<< "X :"<< x << "Y :"<< y;
    }
    coord operator+ (coord ob2);
};

coord coord :: operator+ (coord ob2)

{
    coord temp;

    temp.x = x + ob2.x;
    temp.y = y + ob2.y;

    return temp;
}
int main()
{
    coord 01(10,10),02(5,3),03;

    int x,y;
    03 = 01 + 02;

    03.get_xy(x, y);
    cout<<"(01+02) X:" << x << "Y :"<<y<<"\n";

    return 0;
}
