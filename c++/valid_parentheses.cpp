#include<iostream>
#include<vector>

using namespace std;
bool isValid(string s) {
    // cout << s << endl;
    // cout << s.length();
    if(s.length()%2 ==1)
        return false;
    vector<char> vv;

    for(int ii = 0;ii < s.length();ii++){
        if(s[ii]=='('||s[ii]=='['||s[ii]=='{')
            vv.push_back(s[ii]);
        else{
            if(vv.empty())
                return false;
            else if(!((s[ii]==')' && vv.back()=='(')||(s[ii]=='}' && vv.back()=='{')||(s[ii]==']' && vv.back()=='[')))
                return false;
            vv.pop_back();
        }
    }
    if(vv.empty())
        return true;
    return false;
}
int main()
{
    string s1 = "()[]";
    string s2 = "([{}])";
    string s3 = "((})]";
    cout << isValid(s1) << endl;
    cout << isValid(s2);
    cout << isValid(s3);
}