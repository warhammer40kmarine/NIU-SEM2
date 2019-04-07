#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
union test
    {
        //char EngName;
        int number;
        int age;
        int height;

    };
    union test sample; //={"anonymous",666,6,666};
    //void func(struct sample);
int main()
{
    //cout << "student's English Name=";
    //getline(cin,sample.EngName);
    cout << "student's tag number=";
    cin>>sample.number;
    cout << "student's age=";
    cin>>sample.age;
    cout << "student's height=";
    cin>> sample.height;


    cout << "output of the test sample"<< endl;
    cout << "number="<<sample.number << endl;
    cout << "age="<<sample.age << endl;
    cout << "height="<<sample.height<< endl;
    //cout << "Name=" << sample.EngName<< endl;

    cout << "sizeof(sample)="<< sizeof(sample);



    return 0;
}
