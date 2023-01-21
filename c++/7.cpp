#include<iostream>
using namespace std;

int reverse(int x)
{
    int result=0;
    int nega=1;
    if(x<0)
    {
        nega =-1;
        x = 0-x;
    }
    if(x>1000000000&&x%10>2)
        return 0;
    while(x%10==0&&x>0)
        x/=10;
    while(x>0)
    {
        //cout << result << endl
        if(result>INT_MAX/10)
            return 0;
        result*=10;
        result+=x%10;
        x/=10;
    }
    //result *= nega;
    return result * nega;
}

int main()
{
    cout << reverse(123) << endl;
    cout << reverse(-123) << endl;
    cout << reverse(1563847412) << endl;
    cout << reverse(1534236469) << endl;
    
    cout << INT_MAX << endl;
}