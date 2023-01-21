#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& height) {
    int max;
    int rl=0;
    if(height.at(0)<height.at(height.size()-1))
        rl=1;
    if(rl)
    int temp;
    int ii=0,jj=0;
    
    return max;
}


int main()
{
    vector <int> vv;
    vv.push_back(1);
    vv.push_back(8);
    vv.push_back(6);
    vv.push_back(2);
    vv.push_back(5);
    vv.push_back(4);
    vv.push_back(8);
    vv.push_back(3);
    vv.push_back(7);
    cout << "max : " << maxArea(vv) << endl;
}