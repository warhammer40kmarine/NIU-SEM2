#include <iostream>

using namespace std;
#define cnum 51
int main()
{
    int i,j,cnum;
    int card[cnum];
        for (i=0;i<51;i++)
        for (cnum=0;cnum<51;cnum++)
            card[i]=cnum;

    cout << "Your Poker Card Number is=" << endl;
    for (j=0;j<51;j++)
        cout << card[j] << endl;
    return 0;
}
int deck sequence()
{
    for ( i>0;i<51;i++)
        deck[i]=i;
}
