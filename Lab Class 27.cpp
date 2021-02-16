/// Functoin Templete Swaping

#include<iostream>
using namespace std;

template <class T>
void Large(T *n1, T *n2)
{

     T temp;
     temp = *n1;
     *n1 = *n2;
     *n2 = temp;

}
int main()
{
    int i1,i2;
    float f1,f2;
    char c1,c2;


    cout << "Enter two integers:\n";
    cin >> i1 >> i2;
    Large(&i1,&i2);
    cout << i1 << endl << i2<< "\nis swap value.\n" << endl;

    cout << "Enter two float :\n";
    cin >> f1 >> f2;
    Large(&f1,&f2);
    cout << f1 << endl << f2<< "\nis swap value.\n" << endl;

    cout << "Enter two characters :\n";
    cin >> c1 >> c2;
    Large(&c1,&c2);
    cout << c1 << endl << c2<< "\nis swap value.\n" << endl;


}

