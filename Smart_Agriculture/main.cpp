#include <iostream>

using namespace std;
void InitALL();
void ReadTemp();
int ReadHumidity();
void OnOff();
void Show();
void Display();



int main()
{
    int choice;
    cout << "Welcome to SMART AGRICULTURE test sensor Program" << endl;
    cout << "System Start " << endl;
    cout << "INITIAL DATA DISPLAY" << endl;
    //call function show()
    cout << "What do you want to do?" << endl;
    cout << "Initial Data - (PRESS 1)"<< endl;
    cout << "Input Value - (PRESS 2)" << endl;
    cout << "Show Temperature - (PRESS 3)"<< endl;
    cout << "Show Humidity - (PRESS 4)"<< endl;
    cout << "Show Camera Live View - (PRESS 5)"<< endl;
    cout << "Switch ON/OFF water valve - (PRESS 6)"<< endl;
    cout << "Show All the DATA - (PRESS 7)"<< endl;
    switch (choice)
    {
        case 1;
        InitAll();
        break;

        case 2;
        // call function for input to class
        case 3;
        ReadTemp();
        break;

        case 4;
        // show temperature in class
        case 5;
        // show camera live view pixel data from class
        case 6;
        // switch the value
        case 7;
        // display everything from class

    }
    return 0;
}
InitALL(int Num)
{

}
ReadTemp(float Tmp) //溫度要能儲存小數點
{
    /*true=success;
    if(success)
        return 0;
    else
        return -1;*/
}
ReadHumidity(float Hum) //ex. 60.5%
{
    /*if(success)
        return 0;
    else
        return -1;*/
}
ReadCamera(char Pixel)//
{
   /*if(success)
        return 0;
    else
        return -1;*/
}
OnOff(int Input,int Output)
{
    /*if(success)
        return 0;
    else
        return -1;*/
}
Show(int CLASS)
{

}
Display(int wholedata)
{

}
