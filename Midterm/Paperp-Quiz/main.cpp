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
int main()
{
    int x,y,i,j;
    float m,n;
    char a,b,c;
    int z[]={8,10,12,14,16,18,20};
    cin >>a>>b>>c>>m>>n>>x;
    // Section B

    /*x=0;
    j=sizeof(z)/sizeof(int);
    for(i=0;i<j;i++)
        x+=z[i];
    cout<<float(x/j)<< endl;
    */
    float avg;
    int count=0,tmp,count2=0;
    for(count;count<N;count++)
        {
            tmp=z[count];
            count2+=1;
        }
    avg= float(tmp/count2);
    cout<< avg << endl;


    return 0;
}
