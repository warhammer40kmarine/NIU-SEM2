#include <iostream>
#include <cstdlib>
using namespace std;

struct time
    {
        int hour;
        int minutes;
        double seconds;

    }start;
struct time_1
    {
        int hour;
        int minutes;
        double seconds;

    }end;
struct time_2
    {
        int hour;
        int minutes;
        double seconds;

    }elapse;

    //FUNCTION TO CALCULATE THE DIFFERENCE
int calculate(int ihour,int iminutes,double iseconds,int ehour,int eminutes,double eseconds) // SEC->MIN->HOUR->DAYS->MONTHS->YEARS
{
    int tmp_hr=0,tmp_min=0,tmp_sec=0;
    //hr
    elapse.hour=(ihour-ehour);
    if(elapse.hour<0)
        elapse.hour=((-1)*(elapse.hour));
    elapse.hour=elapse.hour+tmp_hr;

    //min
    elapse.minutes=(iminutes-eminutes);
    if(elapse.minutes<0)
        elapse.minutes=((-1)*(elapse.minutes));
    if(elapse.minutes>60)
        tmp_hr+=1;


    elapse.minutes=elapse.minutes+tmp_min;
    //sec
    elapse.seconds=(iseconds-eseconds);
    if(elapse.seconds>0)
        elapse.seconds=59;
    if(elapse.seconds<0)
        {tmp_min+=1;
         elapse.seconds=59;}

    if(elapse.hour=1)
        {elapse.hour=elapse.hour-1;
        elapse.minutes=59;}

}
int main() // MAIN CODE
{
    //initial value
    start.hour=12;
    start.minutes=30;
    start.seconds=25.5;
    cout << "Initial time  =  ";
    cout << start.hour <<":"<< start.minutes <<":"<< start.seconds << endl;
    //input end time value
    cout << "input (end) time value" << endl;
    cout << " FORM= {hh:mm:ss.ss}"<< endl;
    cout << "hour=";cin >>end.hour;
    cout << "minutes=";cin >> end.minutes;
    cout << "seconds="; cin >> end.seconds;
    cout << "End time = ";
    cout << end.hour <<":"<< end.minutes <<":"<< end.seconds << endl;

    cout << "Interval-From Initial to End = ";

    calculate(start.hour,start.minutes,start.seconds,end.hour,end.minutes,end.seconds);

    cout << elapse.hour <<":"<< elapse.minutes <<":"<< elapse.seconds << endl;

    return 0;
}
