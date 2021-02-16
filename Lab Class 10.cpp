/// Constructor

#include<iostream>
using namespace std;
class value
{
protected:
    int number;
public:

    void getValue()
    {
        cin>>number;
    }
    int ret_value()
    {
        return number;
    }
};
class CalSquar:private value
{
public:
    int result;
    int x;
    void cal_squar()
    {
        getValue();
        x=ret_value();
        result=x*x;
    }
    void output()
    {
        cout<<result<<endl;
    }
};
class CalCube:private value
{
public:
    int result1,y;
    void Cal_Cube()
    {
        getValue();
        y=ret_value();
        result1=y*y*y;
    }
    void output1()
    {
        cout<<result1<<endl;
    }

};
int main()
{
    CalSquar a;
    CalCube b;
    a.cal_squar();
    a.output();
    b.Cal_Cube();
    b.output1();

}
