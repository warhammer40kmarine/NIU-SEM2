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

void InsertDB(int num); // 加入資料
void DeleteDB(); //n=總資料筆數,k=要刪除第幾筆
void ShowDB(); // 顯示資料
void display(int i);
string QueryDB(string name); // 搜尋資料
int main()
{
    int num=0;
    int choice;
    string name;
    cout << "Welcome to Test STDUDENT DATA BASE" << endl;
    cout << "Please insert your Data down below" << endl;
    cout << "How many Student's DATA to stall=";
    cin >> num;
    InDB StudentDB[num]; // 初始化
    cout << "************************************************"<< endl;
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
            DeleteDB();
            main();
            break;
        case 3:
            ShowDB();
            main();
            break;
        case 4:
            QueryDB(name);
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
void DeleteDB()
{
    int temp=0;
    string str;
    cout << "The Amount of DATA stored=";
    for (int i=0;i<N;i++)
        if (*StudentDB[i].Sex)
            temp=temp+1; // 用暫存變數來計數
        cout << temp << endl;
    cout << "Input the Name of the Student you want to remove=";
    cin >> str;
    int m=0;

    for (int k=0;k<N;k++)
    {
        m=StudentDB[k].ENGname.compare(str);
            if (m==0)
        {
            StudentDB[k].ENGname= '\0';
            *StudentDB[k].Sex= '\0';
            StudentDB[k].MathScore= '\0';
        }
        else
        {
            cout << "not found"<< endl;
        }
    }




}
void ShowDB()
{
    for (int i=0;i<N;i++)
        if (*StudentDB[i].Sex) //如果指標存在
        display(i);
    cout << "*********************those are the data*****************************"<< endl;
}
string QueryDB(string name)
{
    int i;
    for (i=0;i<N;i++)
    {
        if (StudentDB[i].ENGname.compare(name))break;
    if (i==N) return name;
    else return StudentDB[i].ENGname;
    }


}
void display(int i)
{

    cout << "NO."<<'\t';  cout<< "NAME" <<'\t';  cout<< "SEX" <<'\t';  cout<< "SCORE" <<'\t';  cout << " "<< endl;
    cout << i <<'\t'; cout<< StudentDB[i].ENGname<< '\t';cout<< StudentDB[i].Sex <<'\t';cout<< StudentDB[i].MathScore <<'\t';cout <<" "<< endl;
}
