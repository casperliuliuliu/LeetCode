#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& height) {
    int max=0;
    int temp;
    int ii=0,jj=0;
    for(ii=0;ii<height.size();ii++)
    {
        for(jj=ii+1;jj<height.size();jj++)
        {
            if(height.at(ii)<height.at(jj))
                temp = height.at(ii)*(jj-ii);
            else
                temp = height.at(jj)*(jj-ii);
            if(max<temp)
                max = temp;
        }
    }
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