#include<iostream>
using namespace std;

int check(string s)
{
    char ff=s[0],bb;
    for(int ii=1;ii<s.size();ii++)
    {
        ff=s[ii-1];
        bb=s[ii];
    }
}

int romanToInt(string s )
{
    int value=0;
    value = check(s);

    for(int ii=0;ii<s.size();ii++)
    {
        if(s[ii]=='M')
            value +=1000;
        else if(s[ii]=='D')
            value +=500;
        else if(s[ii]=='C')
            value +=100;
        else if(s[ii]=='L')
            value +=50;
        else if(s[ii]=='X')
            value +=10;
        else if(s[ii]=='V')
            value +=5;
        else if(s[ii]=='I')
            value +=1;
    }   
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
    cout << romanToInt("III") << endl;
    cout << romanToInt("LVIII") << endl;
    cout << romanToInt("MCMXCIV") << endl;

}