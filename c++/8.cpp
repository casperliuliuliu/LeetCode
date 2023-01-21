#include<iostream>
using namespace std;

int myAtoi(string s) {
    int ii=0;
    while(ii<s.length()&&s[ii]==' ')
        ii++;
    if(ii==s.length())
        return 0;
    int nega=1;
    if(s[ii]!='-'&&s[ii]!='+'&&(s[ii]>'9'||s[ii]<'0'))
        return 0;
    if(s[ii]=='-')
    {
        nega=-1;
        ii++;
    }
    else if(s[ii]=='+')
        ii++;
    if(s[ii]>'9'||s[ii]<'0')
        return 0;
    long long result=s[ii]-'0';
    //cout << ii <<endl;
    ii++;
    while(ii<s.length()&&s[ii]<='9'&&s[ii]>='0')
    {
        if(result>=INT_MAX/10)
        {
            //cout << nega << endl;
            if(nega==1)
                return INT32_MAX;
            return INT32_MIN;
        }
        result*=10;
        result+=s[ii]-'0';
        ii++;
    }
    return result*nega;
}

int main()
{
    cout << "num = " << myAtoi("42") << endl;
    cout << "num = " << myAtoi("   -42") << endl;
    cout << "num = " << myAtoi("2147483648") << endl;
    cout << "num = " << myAtoi("+1") << endl;
    cout << "num = " << myAtoi("  0000000000012345678") << endl;
}