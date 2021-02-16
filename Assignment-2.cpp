#include<iostream>
using namespace std;

class number

{
private:

    int real;
    int img;

public :

    void getvalue(int x,int y);
    number operator+(number N);
    number operator++(number N);
    number operator-(number N);
    number operator--(number N);
    void display();

};


void number :: getvalue(int x,int y)
{
    real = x;
    img = y;
}

void number :: operator+(number N)
{
    number New;
    New.real = real + N.real;
    New.img = img + N.img;

    return New;
}

number number :: operator++(number N)

{
    number New;
    real++;
    img++;
    return New;
}

number number :: operator-(number N)
{
    number New;
    New.real = real - N.real;
    New.img = img - N.img;
    return New;
}

number number :: operator--(number N)
{
    number New;
    real--;
    img--;
    return New;
}

void number :: display()
{
    cout<<"real number:"<<real<<endl;
    cout<<"img number:"<<img<<endl;
}

int main()
{

    number obj1,obj2,result,result1;

    obj1. getvalue();
    obj2. getvalue();

    result = obj1 + obj2;
    result1 = obj1 - obj2;

    obj1--;
    obj1++;

    cout<<"input values \n";
    obj1. display();
    obj2. display();

    cout<<"\n result \n";
    result.display();
    result1.display();


    return 0;
}
