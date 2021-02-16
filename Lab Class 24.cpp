/// Exception Handling

#include<iostream>
using namespace std;

struct MyException : public exception
{
    const char * what () const throw ()
    {
        return "C++ Exception";
    }
};

int main()
{
    try
    {
        throw MyException();
    }
    catch (MyException& e)
    {
        std :: cout << "MYException caught" << std :: endl;
        std :: cout << e.what () << std :: endl;
    }
    catch (std :: exception& e)
    {
        // other errors;
    }
}


