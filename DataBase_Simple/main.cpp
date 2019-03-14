#include <iostream>
#include <cstdlib>
#include <string>
#define N 100
using namespace std;

struct InDB //declare a structure
{
    string ENGname;
    char Sex [2];
    int MathScore;
}StudentDB[N];  // max=100

void InsertDB(int num);
void DeleteDB(int num); //n=總資料筆數,k=要刪除第幾筆
void ShowDB(int num);
void QueryDB(int num);
int main()
{
    int num=0;
    int choice;
    cout << "Welcome to Test STDUDENT DATA BASE" << endl;
    cout << "Please insert your Data down below" << endl;
    cout << "How many Student's DATA to stall=";
    cin >> num;
    InDB StudentDB[num]; // 初始化

    cout << "What would you like to do?"<< endl;
    cout << "Insert A New Data- (PRESS 1)"<< endl;
    cout << "Delete A Data- (PRESS 2)"<< endl;
    cout << "Display All Data-(PRESS 3)" << endl;
    cout << "Find A Data -(PRESS 4)"<< endl;
    cout << "QUIT -(PRESS 0)"<< endl;
    cin >> choice;

    switch(choice)
    {
        case 1:
            InsertDB(num);
            main();
            break;
        case 2:
            DeleteDB(num);
            main();
            break;
        case 3:
            ShowDB(num);
            main();
            break;
        case 4:
            QueryDB(num);
            main();
            break;
    }

    return 0;
}
void InsertDB(int num)
{
    num=num;
        for (int i=0;i<num;i++)
    {
        cout << "Your English Name= ";
        cin>>StudentDB[i].ENGname;
        cout << "Your Sex (Male=M),(Female=F),(Others=Q)=";
        cin>>StudentDB[i].Sex;
        cout << "Your Math Score=";
        cin>> StudentDB[i].MathScore; '\n';
        cout << i+1 << " ENTRY"<< '\n';

    }
}
void DeleteDB(int num)
{
    cout << "test"<< endl;
}
void ShowDB(int num)
{
    cout << "test"<< endl;
}
void QueryDB(int num)
{
    cout << "test"<< endl;
}
/*void ShowDB(InDB,int n)
{
    //i=n;
    cout << "NO.";'\t'; cout<< "NAME" ;'\t';cout<< "SEX"; '\t';cout<< "SCORE" ;'\t'; endl;
    cout << i '\t'<< StudentDB[i].ENGname '\t'<< StudentDB[i].Sex '\t'<< StudentDB[i].MathScore '\t'<< endl;
}*/
