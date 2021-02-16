/// Namespace

#include<iostream>
using namespace std;

namespace first_space
{
    void func()
    {
        cout<<"Inside first space "<<endl;
    }
}

namespace second_space
{
    void func()
    {
        cout<<"Inside second space "<<endl;
    }
}



int main()
{
    first_space::func();
    second_space::func();
}
