#include <iostream>
#include <cstdlib>
using namespace std;
class Caaa    //
{
   public:
     int num1,num2;
};

class Cbbb : public Caaa  // 取 Caaa 的 num1和 num2
{
   public:
      void set_num(int a, int b) // 設定a和b的值，用Caaa的num1和num2
      {
         num1=a;
         num2=b;
      }
      void show()
      {
         cout << "num1= " << num1 << endl;
         cout << "num2= " << num2 << endl;
      }
};

int main(void)
{
   Cbbb obj;
   obj.set_num(10,20); // a=10,b=20
   obj.show();
   return 0;
}
