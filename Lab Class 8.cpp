/// Constructor

#include<iostream>
using namespace std;
class shape
{
public:
    int length;
    int width;
public:

    shape()
    {
        cout<<"Enter Height"<<endl;
        cin>>length;
        cout<<"Enter Width\n";
        cin>>width;
    }
};
class Rectangle:public shape
{
public:
    int result;
    Rectangle()
    {
        result=length*width;
        //cout<<result;
    }

};
class Circle:public shape
{
public:
    int result1;
    Circle()
    {
        result1=3.1416*length*length;
    }
};
class Area:public Rectangle,public Circle
{
public:
    void output()
    {
        cout<<"Rectangle:"<<result<<endl;
        cout<<"Circle:"<<result1<<endl;
    }
};
int main()
{
    Area a;
    //Rectangle b;
    //b.input();

    //b.Rcalculate();
    a.output();

    return 0;
}
