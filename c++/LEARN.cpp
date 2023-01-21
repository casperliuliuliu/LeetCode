#include<iostream>
#include<vector> 
using namespace std;

int main()
{
    //array用来保存一个3*3的二维数组，array的每个元素都是vector<int>类型
    vector <vector<int> >array;
    std::vector<int> v;
    for (int i = 0; i <3; i++){
        for (int j = 0; j <3; j++){
            int value;
            cin >> value;
            v.push_back(value);
        }
        array.push_back(v); //保存array的每个元素
        v.clear();
    }

    for (int i = 0; i <array.size(); i++)
    {
        for (int j = 0; j <3; j++)
            cout <<array[i][j];
        cout<<endl;
    }
    return 0;
}