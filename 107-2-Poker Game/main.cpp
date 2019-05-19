#include <iostream>
#include <stdlib.h>
#include <time.h>
#define cnum 52
using namespace std;
int num;
string *ptr_card;
void InitialPoker(string card[],int n)// Initialize the deck, n=decks
{
    int num;
    num=cnum*n;
    ptr_card=new string[num];
    for (int i=0;i<num;i++)
        ptr_card[i]=card[i%52];
    return;
}
void InitialCard(string *ptr)
{
    for (int i0=0;i0<4;i0++)
    {
        for (int i1=0;i1<13;i1++)
        {
            ptr[13*i0+i1]+='A'+i0;
            if(i1>=0)
                ptr[13*i0+i1]+='A'+i1-10;
            else
                ptr[13*i0+i1]+='0'+i1;
        }
    }
}
void Shuffle(string *ptr,int n)// n=shuffle times
{
    for (int j=0;j<n;j++)
    {
        for (int i=0;i<num;i++)
        {
            string temp0=ptr[i];
            int temp1=rand()%num; // use random number for temp value
            ptr[i]=ptr[temp1];//refer to line 21
            ptr[temp1]=temp0;
            return;
        }
    }
}
void ShowAllCards(string *ptr,int n,int k)// n=total card numbers, k=cards in every roll
{
    for(int l=0;l<(n/k);l++)
    {
        cout<<'\n';
        if(l==(n/k))
            for(int m=0;m<n%k;m++)
        {
            cout << ptr[l*k+m] << '\n';
        }
        else
            for(int m1=0;m1<k;m1++)
        {
            cout << ptr[l*k+m1] << '\n';
        }
        cout<< endl;
    }
}
void ShowOneCard(int n)
{
    cout << ptr_card[n];
}

int main()
{
    srand(time(NULL));// random num
    string card[cnum];// string array with predefine value
    InitialCard(card);// initialize all 52 cards
    InitialPoker(card,1);
    cout << "Before Shuffling" << endl;
    ShowAllCards(ptr_card,52,13);// show all the cards , 52 cards in one deck , 13 cards per roll
    Shuffle(ptr_card,5);//shuffle card ,send pointer of the string
    cout << "After Shuffling" << endl;
    ShowAllCards(ptr_card,52,13); // show all the cards after shuffling

    for (int k=0;k<=4;k++)
        cout << "People" <<k << endl;

    for (int j=0;j<4;j++)
        ShowAllCards(&ptr_card[j*4],4,4);// show cards from shuffled decks, 4 for each

    //WhoWin(ptr_card);

    /*int i,j,cnum;
    int card[cnum];
        for (i=0;i<51;i++)
        for (cnum=0;cnum<51;cnum++)
            card[i]=cnum;

    cout << "Your Poker Card Number is=" << endl;
    for (j=0;j<51;j++)
        cout << card[j] << endl;*/
    return 0;
}
/*int deck sequence()
{
    for ( i>0;i<51;i++)
        deck[i]=i;
}*/
