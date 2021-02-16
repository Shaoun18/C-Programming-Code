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
    int compare(Box box,Box box1)
    {
        return this->volume()<box.volume() && this->volume()<box1.volume();
    }
};
int main()
{
    Box box1(3.4,4.5,5.6);
    Box box2(3.4,4.5,5.6);
    Box box3(3.4,4.5,5.6);
    if(box1.compare(box2,box3))
        cout<<"Box1 is smaller than Box2 & 3"<<endl;
    else if(box2.compare(box1,box3))
        cout<<"Box2 is smaller then Box1,Box3"<<endl;
    else if(box3.compare(box1,box2))
        cout<<"Box3 is smaller then Box1,Box2"<<endl;
    else
        cout<<"Box1,Box2,Box3 is Equal"<<endl;



}
