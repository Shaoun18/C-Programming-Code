/// Class Template

#include<iostream>
using namespace std;

template <class T>
class calculator
{
private:
        T num1,num2;
public:
        calculator (T n1,T n2)
               {
                 num1=n1;
                 num2=n2;
               }
        void displayresult()
        {
            cout<<"Numbers are:"<<num1<<"and"<<num2<<endl;
            cout<<"Addition is:"<<add()<<endl;
            cout<<"Substraction is:"<<subs()<<endl;
            cout<<"Product is:"<<pro()<<endl;
            cout<<"Divition is:"<<div()<<endl;
        }
    T add(){return num1+num2;}
    T subs(){return num1-num2;}
    T pro(){return num1*num2;}
    T div(){return num1/num2;}

};

int main()
{
    calculator<int>intcalc(2,1);
    calculator<float>floatcalc(2.2,1.5);

    cout<<"Int result is:"<<endl;
    intcalc.displayresult();
    cout<<"Float result is:"<<endl;
    floatcalc.displayresult();
}
