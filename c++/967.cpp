#include<iostream>
#include<vector>
using namespace std;
vector<int> ans;
void dfs(int n, int k, int lasti, int level,int current)
{
    if(lasti>9)
        return;
    if(lasti<0)
        return;
    current*=10;
    current+=lasti;
    if (level == n)
    {
        ans.push_back(current);
        return;
    }
    dfs(n,k,lasti+k,level+1,current);
    if(k>0)
    dfs(n,k,lasti-k,level+1,current);
}
vector<int> numsSameConsecDiff(int n, int k) {
    // n digits
    // k diff
    // 1234 1212 2345 2121 2321 
    ans.clear();
    int ii=0;
    for(ii=1;ii<10;ii++)
    {
        dfs(n,k,ii,1,0);
    }
    return ans;
}


int main()
{
    vector<int> v1 = numsSameConsecDiff(3,7);
    vector<int> v2 = numsSameConsecDiff(2,1);
    for(int ii=0;ii<v2.size();ii++)
    {
        cout << v2.at(ii) << endl;
    }
}