/// Function Overloading

#include <iostream>
using namespace std;

class printData {
   public:
      void print(int i,int j) {
        cout << "Printing int: " << i+j << endl;
      }
      void print(double  f,double k) {
        cout << "Printing float: " << f+k << endl;
      }
      void print(char* c) {
        cout << "Printing character: " << c << endl;
      }
};

int main(void) {
   printData pd;

   pd.print(3,4);
   pd.print(4,5);

   return 0;
}
