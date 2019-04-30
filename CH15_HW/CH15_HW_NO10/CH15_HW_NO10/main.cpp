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

      CTime(){}

      void show_time()
      {
         cout << hour << "hr " << min << "min " << sec << "sec" << endl;
      }
      double to_sec()
      {
         return hour*3600+min*60+sec;
      }
      CTime operator*(const int &var)
      {
         double time,s;
         int h,m;
         time=this->to_sec()/var;
         h=(int)time/3600;
         m=((int)time-h*3600)/60;
         s=time-(h*3600+m*60);
         return CTime(h,m,s);
      }
};

int main(void)
{
   CTime t1(6,35,41.5);
   CTime t2=t1*3;

   t1.show_time();
   t2.show_time();


   return 0;
}
