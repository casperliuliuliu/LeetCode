#include<iostream>
#include<vector>
using namespace std;

vector<string> restoreIpAddresses(string s) {
    vector<string> v;
    cout << s << endl;

    return v;
}
void show_vector(vector<string>& v){
    for(int ii =0; ii<v.size();ii++)
        cout << v.at(ii) << ", ";
}
int main()
{
    string s ="25525511135";
    vector<string> vv = restoreIpAddresses(s);
    show_vector(vv);
}