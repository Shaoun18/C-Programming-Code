/// Template

#include <iostream>
using namespace std;
template <class T>
class Calculator
{
private:
	T num1, num2;
public:
	Calculator(T n1, T n2)
	{
		num1 = n1;
		num2 = n2;
	}
	//function declare.
	T add();
	T subtract(){ return num1 - num2; }
	T multiply();
	T divide();
	//output function here.
	void displayResult()
	{
		cout << "Numbers are: " << num1 << " and " << num2 << "." << endl;
		cout << "Addition is: " << add() << endl;
		cout << "Subtraction is: " << subtract() << endl;
		cout << "Product is: " << multiply() << endl;
		cout << "Division is: " << divide() << endl;
	}
};
//Here works of full class function
template<class T>
T Calculator<T>::add()
{
    return num1 + num2;
}
template<class T>
T Calculator<T>::multiply()
{
     return num1 * num2;
}
template<class T>
T Calculator<T>::divide()
{
     return num1 / num2;
}
int main()
{
	Calculator<int> intCalc(2, 1);
	Calculator<float> floatCalc(2.4, 1.2);

	cout << "Int results:" << endl;
	intCalc.displayResult();

	cout << endl << "Float results:" << endl;

	floatCalc.displayResult();
	return 0;
}
