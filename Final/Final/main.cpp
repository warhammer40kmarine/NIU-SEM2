#include <iostream>
#include <stdio.h>
#include <cstdlib>
#define NUM 100
using namespace std;
class database
{
    public:
    int r;
    int p;
    string m;
    string s;
    string res;
    string Y;
};
/*void show_results(void)
{
        cout << " NO" << '\t' << " Radius" << '\t' << "Meal" << '\t' << "Style" << '\t' << "Price" << endl;
        for (int i=0;i<NUM;i++)
        {
            cout << data[i].r<<'\t'<< data[i].m<<'\t'<<data[i].s<<'\t'<<data[i].p <<endl;
        }
};*/
int main()
{
    int radius;
    int price;
    int num;
    string meal;
    string style;
    string response;
    // declare
    class database data[NUM];
    for (num=0;num<NUM;num++)//initial database
    {
        data[num].r=0;
        data[num].p=0;
        data[num].m=meal;
        data[num].s=style;
        data[num].res=response;
    }
    // use .txt or .xml to put restaurant info into database after initialize
    cout << "Welcome to National Ilan University Restaurant DATA BASE" << endl;
    cout << " //INSTRUCTIONS//" << endl;
    cout << "First of all,You need to input a number, which stands for the radius in Kilometers" << endl;
    cout << "Input the radius in Kilometers=";cin >> radius;
    data[0].r=radius;
    cout << endl;
    cout << "Second, Input which Meal of the day you want to look up.(AS BELOW) " << endl << '\n';
    cout << "Breakfast"<<'\n'; cout << "Lunch"<< '\n';cout << "Dinner"<<'\n';cout << "Midnight-Snack"<<'\n';
    cout << "Insert meals as shown on top="; cin >> meal;
    data[0].m=meal;
    cout << endl;
    cout << "Third, now you can insert what kind of cooking style you're looking for.(AS BELOW)" << endl<< '\n';
    cout << "Western"<<'\n'; cout << "Chinese"<< '\n';cout << "Japanese"<<'\n';cout << "Italian"<<'\n';
    cout << "Insert the style you prefer=";cin >> style;
    data[0].s=style;
    cout << endl;
    cout << "Last, which is the most important part.THE PRICE RANGE"<<endl;
    cout << "Input the price in NTD$="; cin >> price;
    data[0].p=price;
    cout << endl;
    cout << "PERFECT! NOW LET THE PROGRAM PROCESS A WHILE"<< endl;
    //functions

    //use functions to find compare input string to database if found= output search result

    // show the results
    //show_results();
    cout << "NO" << '\t' << "Radius" << '\t' << "Meal" <<'\t'<<'\t'<< "Style" <<'\t'<<'\t'<< "Price" << endl;
        for (int i=0;i<NUM;i++)
        {
            cout << i <<"|" <<'\t'<<data[i].r<<'\t'<< data[i].m<<'\t'<<'\t'<<data[i].s<<'\t'<<'\t'<<data[i].p <<endl;
        }
    cout << endl;
    // Review function
    cout << "Do you want to leave any reviews to this restaurant?(Y/N)";cin >> response;
    if (response=Y)
    {

    }
    else
    {

    }
    cout << endl;
    cout << "test" << << data[0].r <<  data[0].p << data[0].m<< data[0].s <<endl;
    return 0;
}
