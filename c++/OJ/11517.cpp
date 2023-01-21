#include<iostream>
using namespace std;

int min=-10000;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc=0,goal=0,cc=0;
    cin >> tc >> goal >> cc;
    int* money= new int[cc];
    for(int ii=0;ii<cc;ii++){
        cin >> money[ii];
    }
    for(int ii=0;ii<cc;ii++){
        cout << money[ii];
    }    

}


/*
1
1400
3
500
1000
2000

*/