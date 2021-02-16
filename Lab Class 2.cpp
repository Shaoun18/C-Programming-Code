/// Date Print

#include<iostream>
using namespace std;
class today
{
    public:
    int day;
    int month;
    int year;
    void input()
    {
        cout<<"Enter day,month,year";
        cin>>day>>month>>year;
    }
    void print()
    {
        cout<<day<<"/"<<month<<"/"<<year;
    }
};
int main()
{
   today date{8,1,2019};
   today date1;
   date1.print();
   return 0;

}
