#include<iostream>
using namespace std;
bool isMatch(string s, string p) {
    int ii=0;
    while(ii<s.size()&&ii<p.size())
    {
        if(s[ii]=='*')
        if(s[ii]!=p[ii])
        {
            if(s[ii])
        }
    }

    return 
}
int main()
{
    cout << isMatch("aa","a");
    cout << isMatch("aa","a*");
    cout << isMatch("ab",".*");

}