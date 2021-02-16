///  functoin overloading / binary overloading

#include<iostream>
using namespace std;

class Box
{
public:
    double getvolume(void)
    {
        return length * breadth * height;

    }
    void setlength(double len)
    {
          length  =len;
    }
    void setbreadth(double bre)
    {
        breadth = bre;
    }
    void setheight(double hei)
    {
        height = hei;
    }
    Box operator+(const Box& b)
    {
        Box box;
        box.length = this -> length + b.length;
        box.breadth = this -> breadth + b.breadth;
        box.height = this -> height + b.height;
        return box;

    }
private:

    double length;
    double height;
    double breadth;

};

int main()

{
    Box Box1;
    Box Box2;
    Box Box3;

    double volume = 0.0;

    Box1.setlength(6.0);
    Box1.setbreadth(7.0);
    Box1.setheight(5.0);

    Box2.setlength(6.0);
    Box2.setbreadth(7.0);
    Box2.setheight(5.0);


    volume = Box1.getvolume();
    cout<<"Volume of Box1 : "<< volume << endl;

    volume = Box2.getvolume();
    cout<<"Volume of Box2 : "<< volume << endl;

    Box3 = Box1 +Box2;

    volume = Box3.getvolume();
    cout<<"Volume of Box3 : "<< volume << endl;

    return 0;

}



