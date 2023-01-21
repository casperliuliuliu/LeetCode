#include<iostream>
using namespace std;
int check (string, char);
int lengthOfLongestSubstring(string s) 
{
    string subs;
    int start=0;
    int index =0;
    int maxl=0;
    for(start =0;start<s.length();start++)
    {
        subs = s[start];
        for(index=start+1;index < s.length();index++)
        {
            if((check(subs,s[index])))
                subs += s[index];
            else
                break;    
        }
        maxl = max(maxl,index - start);
    }

    return maxl;
}

int check(string s, char c)
{
    for(int ii=0;ii<s.length();ii++)
    {
        if(s[ii]==c)
            return 0;
    }
    return 1;
}
int main()
{
    cout << "\"abcabcbb\":" << lengthOfLongestSubstring("abcabcbb") << endl;
    cout << "\"bbbbb\":" << lengthOfLongestSubstring("bbbbb") << endl;
    cout << "\"pwwkew\":" << lengthOfLongestSubstring("pwwkew") << endl;

    return 0;
}