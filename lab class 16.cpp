/// Date Print

#include <iostream>
using namespace std;
class date {
   public:
      void print_date(string s)
       {
        cout << s<<endl;
       }
       void print_date(int a,int b,int c)
       {
           cout<<a<<"/"<<b<<"/"<<c;
       }
};
int main()
{
   date x;
   x.print_date("26/02/2019");
   x.print_date(26,2,2019);
}
