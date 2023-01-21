#include<iostream>
#include<algorithm>
using namespace std;

bool isPalindrome(string s) {
    if(sizeof(s)==0)
        return true;
    string after ="";
    for(int ii=0;ii<s.length();ii++){
        if(s[ii]>= 'a'&& s[ii]<='z'||s[ii]>= '0'&& s[ii]<='9')
            after +=s[ii];
        else if(s[ii]>= 'A'&& s[ii]<='Z')
            after += tolower(s[ii]);
    }
    string rev = after;
    reverse(after.begin(), after.end());

    cout << rev << endl;
    cout << after << endl;
    for(int ii = 0;ii<after.length()/2;ii++){
        if(rev[ii]!= after[ii])
            return false;
    }
    return true;
}

int main(){
    string case1 = "A man, a plan, a canal: Panama";
    string case2 = "race a car";

    cout << isPalindrome(case2);
}