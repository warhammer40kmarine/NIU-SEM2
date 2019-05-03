#include <iostream>
#include <cstdlib>
using namespace std;
class Caaa    //
{
   protected:
      int num;
   public:
      Caaa()
      {
         num=5;
      }
};

class Cbbb : protected Caaa  //
{
   public:
     void show()
     {
        cout << "num= " << num << endl;
     }
};

class Cccc : public Cbbb  //
{
};

int main(void)
{
   Cccc c;
   c.show();
   return 0;
}

//Cccc可以存取到num的值，因為由上而下繼承下來
