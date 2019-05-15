#include <iostream>
#include <cstdlib>
using namespace std;
class CMath // MASTER
{
   public:

     void show()   // MEMBER FUNCTION
     {
       cout << "ans=" << compute() << endl;
     }
     virtual int compute()=0; // 泛Virtual Function
};

class Cadd : public CMath // SUB
{
   public:
   int num1,num2;

   Cadd(int m,int n):num1(m),num2(n){}

   virtual int compute()
   {
      return num1+num2;
   }
};

int main(void)
{
   Cadd a1(2,3);
   a1.show();
   return 0;
}
