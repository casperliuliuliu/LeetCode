#include<iostream>
#include<vector>
using namespace std;

bool isValid(string s) {
    vector <char> vecchar;

    for(int ii=0;ii<s.length();ii++){
        if(s[ii] == '('||s[ii] == '['||s[ii] == '{')
            vecchar.push_back(s[ii]);
        else{
            if(vecchar.empty())
                return false;
            char check = vecchar.at(vecchar.size()-1);
            vecchar.pop_back();
            if(s[ii]==')'&&check =='('||s[ii]==']'&&check =='['||s[ii]=='}'&&check =='{')
                continue;
            else
                return false;
        }
    }
    if(vecchar.empty())
        return true;
    return false;
        
}
int main()
{
    cout << isValid("()[]");
}