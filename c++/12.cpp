#include<iostream>
using namespace std;

string intToRoman(int num)
{
    string ss;
    int turn[2][7]={0};
    turn [0][0]='M';
    turn [0][1]='D';
    turn [0][2]='C';
    turn [0][3]='L';
    turn [0][4]='X';
    turn [0][5]='V';
    turn [0][6]='I';
    turn [1][0]=1000;
    turn [1][1]=500;
    turn [1][2]=100;
    turn [1][3]=50;
    turn [1][4]=10;
    turn [1][5]=5;
    turn [1][6]=1;
    for(int ii=0;ii<7;ii++)
    {
        for(int jj=num/turn[1][ii];jj>0;jj--)
        {
            ss+= turn[0][ii];
        }

        
    }
    return ss;

}
// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000


int main()
{
    cout << intToRoman(3) << endl;
    cout << intToRoman(58) << endl;
    //cout << intToRoman(1994) << endl;
}