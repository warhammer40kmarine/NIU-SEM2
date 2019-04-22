#include <iostream>
#define N 100
#define M 100
using namespace std;
// section A
struct mm
{
    char nn[];
    int zz;
};
class C
{
private:
    char x;
    int y;
    // section C
public:
    C (char w,int z)
    {
        x=w; y=z;
    }
};
int main()
{
    int x,y,i,j;
    float m,n;
    char a,b,c;
    int z[]={8,10,12,14,16,18,20};
    //cin >>a>>b>>c>>m>>n>>x;
    // Section B

    //1
    /*x=0;
    j=sizeof(z)/sizeof(int);
    for(i=0;i<j;i++)
        x+=z[i];
    cout<<float(x/j)<< endl;
    */

    // 2
    float avg;
    int add=0,tmp,count2=0;
    for(add;add<N;add++)
        {
            tmp=z[add]+tmp;
            count2+=1;
        }
    avg= float(tmp/count2);
    cout<< tmp;
    cout<< count2;
    cout<< avg << endl;

    C xx ('X',4321); // 5

    C xx ()

    //A34A35A24A25B16


    return 0;
}
