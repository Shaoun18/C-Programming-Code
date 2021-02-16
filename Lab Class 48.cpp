#include<iostream>
using namespace std;

class A
{
	int a,b;
	public:
		A(){};
		A(int i,int j)
		{
			a=i;
			b=j;

		}
		void show()
		{
			cout<<a<<"+i"<<b;
		}
		A operator +(A);
};
A A::operator +(A obj)
{
	A temp;
	temp.a=a+obj.a;
	temp.b=b+obj.b;
	return(temp);
}
int main()
{
	A c1(5,6),c2(7,8),c3;
	cout<<"The 1st no. is:";
	c1.show();
	cout<<"\nThe 2nd no. is:";
	c2.show();
	c3=c1+c2;
	cout<<"\nSum is:";
	c3.show();
}
