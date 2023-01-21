#include<iostream>
using namespace std;

int main()
{
    int k[1000];
    memset(k,-0x01,sizeof(k));
    for(int ii=0;ii<1000;ii++){
        cout << k[ii] << endl;
    }
}