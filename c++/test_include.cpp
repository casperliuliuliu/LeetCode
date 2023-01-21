#include "two_sum.cpp"
#include<iostream>
using namespace std;

// this will occur an error.

// void show_hello(){
//     cout << "cool" << endl;
// }

int main(){
    show_hello();
    int aa[] = {3,2,4};
    vector<int> vv;
    vv.insert(vv.begin(),aa,aa+3);
    show_vector(vv);
}