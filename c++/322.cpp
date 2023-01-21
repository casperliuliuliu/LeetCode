#include<iostream>
#include<vector>
using namespace std;

int coinChange(vector<int>& coins, int amount){
    int bestsol[amount+1];
    for(int ii=0;ii<=amount;ii++){
        bestsol[ii]=1000;
    }
    bestsol[0] = 0;
    for(int ii=1;ii<=amount;ii++){
        for(int jj=0;jj<coins.size();jj++){
            if(coins.at(jj)<=ii){
                 if(bestsol[ii]>(1+bestsol[ii-coins.at(jj)]))
                    bestsol[ii] = 1+bestsol[ii-coins.at(jj)];
                //cout << "money = " << ii  << "bs" << bestsol[ii] << endl;
                
            }
        }
    }
    // for(int ii=0;ii<=amount;ii++){
    //     cout << bestsol[ii] << endl;
    // }
    // for(int ii=0;ii<coins.size();ii++){
    //     cout << coins.at(ii) << endl;
    // }
    return bestsol[amount]==1000 ?-1: bestsol[amount];
}
int main()
{
    vector<int> coins;
    coins.push_back(1);
    coins.push_back(2);
    coins.push_back(5);
    
    cout << coinChange(coins, 11) << endl;

}