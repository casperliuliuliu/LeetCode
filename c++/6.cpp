#include<iostream>
using namespace std;

string convert(string s, int numRows) {
    string result[numRows];
    string fin;
    int index=0;
    int row=0;
    int ppmm=1;
    if(numRows==1)
        return s;
    while(index <s.length())
    {

        result[row]+=s[index];
        if(row==numRows-1)
            ppmm = -1;
        else if(row==0)
            ppmm = 1;
        row+=ppmm;
        index++;
    }
    for(int ii=0;ii<numRows;ii++)
        fin += result[ii];
    return fin;
}

int main()
{
    cout << convert("PAYPALISHIRING",3) << endl;
    cout << convert("PAYPALISHIRING",4) << endl;
    cout << convert("A",1) << endl;
    //string name="0";
    //name+="hello";
    //cout << name;


}