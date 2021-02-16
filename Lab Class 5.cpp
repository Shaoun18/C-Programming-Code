/// Rectangle Area Calculation

#include<iostream>
using namespace std;
class rectangle
{
    int length,breadth;
public:
    void GetInput()
    {
        cin>>length>>breadth;
    }
    int AreaCalculation()
    {
        int result;
        result=0.5*length*breadth;
        return result;
    }
    void DisplayArea(int result)
    {
        cout<<result;
    }
    rectangle();
};
rectangle::rectangle()
{
    length=5;
    breadth=4;
}
int main()
{
   rectangle x;
   x.GetInput();
   int y=x.AreaCalculation();
   x.DisplayArea(y);
   return 0;
}
