#include <iostream>
#include <cstdlib>
using namespace std;
class CTime
{
   private:
      int hour,min;
      double sec;

   public:
      CTime(int h,int m,double s):hour(h),min(m),sec(s){}
      CTime(){} // function for CTime t3 to call
      void set_time(int h,int m,double s) // set time function
      {
          hour=h;
          min=m;
          sec=s;
      }
      double convert_to_sec() // function for conversion
      {
          return hour*3600+min*60+sec;
      }
      void show_time()
      {
         cout << hour << "hr " << min << "min " << sec << "sec" << endl;
      }
      int operator>(CTime &t)
      {
          return(this->convert_to_sec()> t.convert_to_sec());
      }
      int operator<(CTime &t)
      {
          return(this->convert_to_sec()< t.convert_to_sec());
      }
};

int main(void)
{
   CTime t1(4,23,56.3); // call Class CTime and given value
   CTime t2(5,45,30.3);
   CTime t3; // Class object t3 with no initial value

   t3.set_time(12,12,12.12);

   cout << "t1 : ";t1.show_time();
   cout << "t2 : ";t2.show_time();
   cout << "t3 : ";t3.show_time();

    if (t1>t2)
        cout << "t1 is larger than t2" << endl;
    else
        cout << "t2 is larger than t1" << endl;
    if(t1<t2)
        cout << "t1 is smaller than t2" << endl;
    else
        cout << "t2 is smaller than t1" << endl;
    if (t3>t2)
        cout << "t3 is larger than t2" << endl;
    else//(t3<t2)
        cout << "t2 is larger than t3" << endl;
    if (t1>t3)
        cout << "t1 is larger than t3" << endl;
    else//(t1>t3)
        cout << "t3 is larger than t1" << endl;

   return 0;
}
