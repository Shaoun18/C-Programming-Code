#include<iostream>
using namespace std;
class test
{
protected:
    double part1,part2;
public:
    void get1()
    {
        cin>>part1>>part2;
    }
};
class sports
{
protected:
    double score;
public:
    void get2()
    {
        cin>>score;
    }
};
class result: public test, public sports
{
   protected:
       double total;
   public:
       void show()
       {
           total=score+part1+part2;
           cout<<total;
       }
};
int main()
{
    result x;
    x.get1();
    x.get2();
    x.show();
}
