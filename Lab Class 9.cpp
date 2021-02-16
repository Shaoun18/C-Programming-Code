/// Constructor

#include<iostream>
using namespace std;
class info
{
protected:
    char name[20];
    int id;
    int age;
public:
    void getinfo()
    {
        cout<<"Enter Name,Id,Age:"<<endl;
        cin>>name>>id>>age;
    }
};
class Department:private info
{
protected:
    string DeptName;
    string ProjectName;
public:
    void getDept()
    {
        getinfo();
        cout<<"Enter DeptName,ProjectName:";
        cin>>DeptName>>ProjectName;
    }
    void showDept()
    {
        cout<<name<<"\n"<<id<<"\n"<<age<<endl;
        cout<<DeptName<<"\n"<<ProjectName<<endl;
    }
};
class Loan:private info
{
protected:
    string loanInfo;
    float loanAmount;
public:
    void getLoan()
    {
        getinfo();
        cout<<"Enter LoanInfo,loanAmount:";
        cin>>loanInfo>>loanAmount;
    }
    void showLoan()
    {
        cout<<name<<"\n"<<id<<"\n"<<age<<endl;
        cout<<loanInfo<<"\n"<<loanAmount<<endl;
    }

};
int main()
{
    Department a;
    Loan b;
    a.getDept();
    a.showDept();
    b.getLoan();
    b.showLoan();
}
