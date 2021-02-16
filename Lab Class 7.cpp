/// Constructor

#include<iostream>
#include<conio.h>
using namespace std;
class person
{
protected:
    string profession;
    int age;
public:
    person()
    {
        profession="Unemplyeed";
        age=18;
        //person():profession("unemployeed"),age(18){};
    }
    void walk()
    {
        cout<<"I can walk\n";
    }
    void talk()
    {
        cout<<"i can talk\n";
    }
    void display()
    {
        cout<<"My profession:"<<profession<<endl;
        cout<<"My age:"<<age<<endl;
    }
    void input()
    {
        cin>>profession;
        cin>>age;
    }
};
class mathteacher:public person
{
public:
    void teachmath()
    {
        cout<<"I can teach\n";
    }
};
class footballer:public person
{
public:
    void football()
    {
        cout<<"I can football\n";
    }
};

int main()
{
    mathteacher a;
    footballer b;

    a.input();
    a.display();
    b.input();
    b.display();


   getch();
}
