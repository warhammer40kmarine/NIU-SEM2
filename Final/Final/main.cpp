#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <vector>
#define NUM 100
using namespace std;
class database_1
{
    public:
    int r;
    int p;
    string m;
    string s;
    string res;
    string Y;
};
class database_2
{
    public:
    int r;
    int p;
    string m;
    string s;
    string res;
    string Y;
}GoogleMapData;

void ShowDB();
string searchDB();
void displayDB();
string response();
int main()
{
    int radius;
    int price;
    int num;
    string meal;
    string style;
    string response;
    string Y="Y";
    string N;
    // declare
    class database_1 data[NUM];
    class database_2 GoogleMapData[NUM];
    //
    //ifstream fin;
    //ofstream fout;
    //fin.open("mapdata.txt");//import data from google api
    //fout.open("result.txt");//export data to result.txt
    ifstream in("mapdata.txt");
    string inputStr;
    vector <string> inputContent;
    while(getline(in,inputStr))
    {
        inputContent.push_back(inputStr);
    }
    in.close();
    ofstream out("result.txt");
    for(int i=0;i<inputContent.size();i++)
    {
        out<< inputContent[i]<< endl;
    }
    out.close();
    //

    for (num=0;num<NUM;num++)//initial database
    {
        data[num].r=0;
        data[num].p=0;
        data[num].m=meal;
        data[num].s=style;
        data[num].res=response;
        GoogleMapData[num].r=0;
        GoogleMapData[num].p=0;
        GoogleMapData[num].m=meal;
        GoogleMapData[num].s=style;
        GoogleMapData[num].res=response;
    }
    // use .txt or .xml to put restaurant info into database after initialize
    cout << "Welcome to National Ilan University Restaurant DATA BASE" << endl;
    cout << " //INSTRUCTIONS//" << endl;
    cout << "First of all,You need to input a number, which stands for the radius in Kilometers" << endl;
    cout << "Input the radius in Kilometers=";cin >> radius;
    data[0].r=radius;

    // use a function to compare input value with database
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
    string searchDB(database_1 data,database_2 GoogleMapData);


    //use functions to find compare input string to database if found= output search result

    // show the results
    void showDB(database_2 GoogleMapData[NUM]);

    // Review function
    cout << "Do you want to leave any reviews to this restaurant?(Y/N)";cin >> response;

    if (response==Y)
    {
        string res;
        cout << "Leave your response (Good/Bad)";(cin >>res).get();getline(cin,res);
        string response(res);
        cout << "Thank you for using the service" << endl;
    }
    else
    {
        cout << "Thank you for using the service" << endl;
    }
    cout << endl;

    cout << "test" << '\t' <<data[0].r <<'\t' <<  data[0].p <<'\t' << data[0].m<<'\t' << data[0].s <<endl;
    return 0;
}
    void showDB(database_2 GoogleMapData[NUM])
    {
        cout << "NO" << '\t' << "Radius" << '\t' << "Meal" <<'\t'<<'\t'<< "Style" <<'\t'<<'\t'<< "Price" << endl;
        for (int i=0;i<NUM;i++)
        {
            cout << i <<"." <<'\t'<<GoogleMapData[i].r<<'\t'<< GoogleMapData[i].m<<'\t'<<'\t'<<GoogleMapData[i].s<<'\t'<<'\t'<<GoogleMapData[i].p <<endl;
        }
    cout << endl;
    }

    string searchDB(database_1 data[],database_2 GoogleMapData[])
    {
        int i;
        for (i=0;i<NUM;i++)
        {
            if (data[i].m.compare(GoogleMapData[i].m))break;
                if (i==NUM) return GoogleMapData[i].m;
                else return data[i].m;
        }
    }
    //int searchDB_R(database_1 data[NUM],database_2 GoogleMapData[NUM])
    string response(string res,database_1 data[],database_2 GoogleMapData[])
    {
        string response;
        response=res;
        for (int i=0;i<NUM;i++)
            data[i].res=res;
    }
