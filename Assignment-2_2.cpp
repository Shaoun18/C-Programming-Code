#include<iostream>
#include<conio.h>
using namespace std;


class complex
{
    int a, b;

public:

    complex()
    {

    }


    void getvalue()
    {
        cout << "Enter the value of Complex Numbers a,b:";
        cin >> a >> b;
    }

    complex operator+(complex ob)
    {
        complex t;
        t.a = a + ob.a;
        t.b = b + ob.b;
        return (t);
    }

    complex operator-(complex ob)
    {
        complex t;
        t.a = a - ob.a;
        t.b = b - ob.b;
        return (t);
    }

    void operator++()
    {
        a = ++a;
        b = ++b;
    }

    void operator--()
    {
        a = --a;
        b = --b;
    }


    void display()
    {
        cout << a << "+" << b << "i" << "\n";
    }
};

int main()
{

    complex obj1, obj2, result, result1;

    obj1.getvalue();
    {

    obj1++;
    cout << "Increment Complex Number\n";
    obj1.display();
    obj1--;
    cout << "Decrement Complex Number\n";
    obj1.display();

    }


    obj2.getvalue();

    result = obj1 + obj2;
    result1 = obj1 - obj2;

    cout << "Input Values:\n";
    obj1.display();
    obj2.display();

    cout << "Result:";
    result.display();
    result1.display();

    getch();
}
