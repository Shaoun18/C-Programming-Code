/// Final Exam

#include<bits/stdc++.h>
using namespace std;
class input
{
public:
    int x;
public:
    void in()
    {
        cin>>x;
    }
};
class circle:public input
{
public:
    double c_calculate()
    {
        x=M_PI*(x*x);

        return x;

    }
    circle operator +(circle &ob)
    {
        circle temp;
        temp.x=this->x+ob.x;

        return temp;
    }
    bool operator <(circle &ob1)
    {
        if(this->x<ob1.x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};
class squar:public input
{
public:
    double s_calculate()
    {
        x=x*x;

        return x;
    }

    squar operator +(squar &ob)
    {
        squar temp;
        temp.x=this->x+ob.x;

        return temp;
    }
    bool operator <(squar &ob1)
    {
        if(this->x<ob1.x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    circle c1,c2,c3;
    squar s1,s2,s3;

    c1.in();
    cout<<c1.c_calculate()<<endl;
    c2.in();
    cout<<c2.c_calculate()<<endl;

    s1.in();
    cout<<s1.s_calculate()<<endl;
    s2.in();
    cout<<s2.s_calculate()<<endl;


    c3=c1+c2;
    s3=s1+s2;

    if(c1<c2)
    {
        cout<<"C1 is less then c2\n";
    }
    else
    {
        cout<<"C2 is less then c1\n";
    }
    if(s1<s2)
    {
        cout<<"s1 is less then s2\n";
    }
    else
    {
        cout<<"s2 is less then s1\n";
    }


}
