#include<iostream>
using namespace std;
#include<vector>

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    for(int ii =0; ii<nums.size();ii++){
        cout << nums.at(ii) << endl;
        for(int jj=ii+1;jj<nums.size();jj++){
            if(nums.at(ii)+ nums.at(jj) == target){
                ans.push_back(ii);
                ans.push_back(jj);
                return ans;
            }
        }
    }
    return ans;
}
void show_hello(){
    cout << "hello" << endl;
}
void show_vector(vector<int>& v){
    for(int ii =0; ii<v.size();ii++)
        cout << v.at(ii);
}
// int main()
// {
//     int arr[] = {3,2,4};
//     int tar = 6;


//     vector<int> v;
//     v.insert(v.begin(),arr,arr+sizeof(arr)/sizeof(arr[0]));
//     v = twoSum(v,tar);
//     show_vector(v);
//     return 0;
// }