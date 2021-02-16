 /// Constructor Called

 #include<iostream>
 using namespace std;
 class x
 {
 public:
    x()
    {
        cout<<"constructor called\n";
    }
    ~x()
    {
        cout<<"Distructor called\n";
    }
 };
 int main()
 {
     x ob1[10];

     return 0;
 }
