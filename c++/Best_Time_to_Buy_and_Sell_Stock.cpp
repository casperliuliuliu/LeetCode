#include<iostream>
#include "two_sum.cpp"
#include<vector>
using namespace std;
int maxProfit(vector<int>& prices){
    if(prices.size()<2)
        return 0;

    int max=0;
    // // Brute Force
    // for(int ii=0;ii< prices.size();ii++){
    //     for(int jj=ii+1;jj<prices.size();jj++){
    //         if(prices.at(jj) - prices.at(ii)>max)
    //             max = prices.at(jj) - prices.at(ii);
    //     }   
    // }
    int left=0, right=0;
    for(right = 0; right < prices.size(); right++){
        if(prices.at(right)<prices.at(left))
            left = right;
        if(prices.at(right) - prices.at(left)> max)
            max = prices.at(right) - prices.at(left);
    }

    return max;
}

int main()
{
    int arr[] = {7,1,5,3,6,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<int> case1;
    case1.insert(case1.begin(), arr, arr + size);
    // show_vector(case1);
    cout << maxProfit(case1);
}