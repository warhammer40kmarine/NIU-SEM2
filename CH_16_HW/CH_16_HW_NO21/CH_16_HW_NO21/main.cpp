#include <iostream>
#include <cstdlib>
using namespace std;
class Caaa    //
{
   public:
     int num1,num2;
     void display() // (a)
     {
        cout << "printed from Caaa class" << endl;
     }
};

class Cbbb : public Caaa  //
{
   public:
      void set_num(int a, int b)
      {
         num1=a;
         num2=b;
      }
      void show()
      {
         cout << "num1= " << num1;
         cout << ", num2= " << num2 << endl;
      }
      void display() // (b) second display to change the sentence from super class
      {
          cout << "printed from Cbbb class" << endl;
       }
};

int main(void)
{
   Caaa obj1; //declare obj1
   Cbbb obj2; //declare obj2
   obj1.display(); // call display function from each classes
   obj2.display();
   return 0;
}
