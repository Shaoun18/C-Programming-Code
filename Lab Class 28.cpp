/// Class Template

#include <iostream>
#include <vector>
#include<cstdlib>
#include<string>
#include<stdexcept>

using namespace std;

template <class T>
class stack
{
private:
    vector <T> elems;

public:
    void push (T const&);
    void pop();
    T top() const;

    bool empty() const
{
    return elems.empty();

}
};

template <class T>
void stack<T>::push(T const& elem)
{
    elems.push_back(elem);

}

template <class T>
void stack <T>::pop()
{
    if (elems.empty())
    {
        throw out_of_range("stack<>::pop():empty stock");
    }

    elems.pop_back();
}

template <class T>
T stack<T>::top()const
{
        if (elems.empty())
    {
        throw out_of_range("stack<>::top():empty stock");
    }

    return elems.back();
}
int main()
{
    try
    {
        stack<int> intstack;
        stack<string>stringstack;

        intstack.push(7);
        cout<<intstack.top()<<endl;

        stringstack.push("Hello");
        cout<<stringstack.top()<<std::endl;

        stringstack.pop();
        stringstack.pop();

    }

    catch(exception const& ex)
    {
        cerr<<"Exception : "<<ex.what()<<endl;
        return 1;
    }
}

