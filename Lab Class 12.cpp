/// Constructor

#include<iostream>
using namespace std;
class Box
{
private:
    double length;
    double breadth;
    double height;
public:

    Box(double a,double b,double c)
    {
        length=a;
        breadth=b;
        height=c;
    }
    double volume()
    {
        return length*breadth*height;
    }

};
int main()
{
    Box box1(3.4,4.5,5.6);
    Box box2(1.4,7.4,2.3);
    Box box3(3.5,4.8,8.9);
    Box *ptr;
    ptr=&box1;
    cout<<"Volume of box1="<<ptr->volume()<<endl;
    ptr=&box2;
    cout<<"Volume of box1="<<ptr->volume()<<endl;
    ptr=&box3;
    cout<<"Volume of box1="<<ptr->volume()<<endl;
}
