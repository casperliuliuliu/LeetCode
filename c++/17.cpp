#include<iostream>
#include<vector>

using namespace std;

vector<string> letterCombinations(string digits) {

    vector<string> ans;
    if(digits.length()==0)
    {
        return ans;
    }
    int size =1;
        for(int kk=0;kk<size*3;kk++)
        {
            ans.push_back("");
        }
    switch(digits[digits.length()-1])
        {
            case '2':
                for(int jj=0;jj<size;jj++)
                    ans.at(jj)+='a';
                for(int jj=size;jj<size*2;jj++)
                    ans.at(jj)+='b';
                for(int jj=size*2;jj<size*3;jj++)
                    ans.at(jj)+='c';  
                    break;  

            case '3':
                for(int jj=0;jj<size;jj++)
                    ans.at(jj)+='d';
                for(int jj=size;jj<size*2;jj++)
                    ans.at(jj)+='e';
                for(int jj=size*2;jj<size*3;jj++)
                    ans.at(jj)+='f';   
                    break;  

            case '4':
                for(int jj=0;jj<size;jj++)
                    ans.at(jj)+='g';
                for(int jj=size;jj<size*2;jj++)
                    ans.at(jj)+='h';
                for(int jj=size*2;jj<size*3;jj++)
                    ans.at(jj)+='i';  
                    break;  

            case '5':
                for(int jj=0;jj<size;jj++)
                    ans.at(jj)+='j';
                for(int jj=size;jj<size*2;jj++)
                    ans.at(jj)+='k';
                for(int jj=size*2;jj<size*3;jj++)
                    ans.at(jj)+='l'; 
                    break;  

            case '6':
                for(int jj=0;jj<size;jj++)
                    ans.at(jj)+='m';
                for(int jj=size;jj<size*2;jj++)
                    ans.at(jj)+='n';
                for(int jj=size*2;jj<size*3;jj++)
                    ans.at(jj)+='o';  
                    break;  

            case '7':
                for(int kk=0;kk<size;kk++)
                {
                    ans.push_back(ans.at(kk));
                }
                for(int jj=0;jj<size;jj++)
                    ans.at(jj)+='p';
                for(int jj=size;jj<size*2;jj++)
                    ans.at(jj)+='q';
                for(int jj=size*2;jj<size*3;jj++)
                    ans.at(jj)+='r'; 
                for(int jj=size*3;jj<size*4;jj++)
                    ans.at(jj)+='s'; 
                    break;  

            case '8':
                for(int jj=0;jj<size;jj++)
                    ans.at(jj)+='t';
                for(int jj=size;jj<size*2;jj++)
                    ans.at(jj)+='u';
                for(int jj=size*2;jj<size*3;jj++)
                    ans.at(jj)+='v'; 
                    break;  

            case '9':
                for(int kk=0;kk<size;kk++)
                {
                    ans.push_back(ans.at(kk));
                }
                for(int jj=0;jj<size;jj++)
                    ans.at(jj)+='w';
                for(int jj=size;jj<size*2;jj++)
                    ans.at(jj)+='x';
                for(int jj=size*2;jj<size*3;jj++)
                    ans.at(jj)+='y'; 
                for(int jj=size*3;jj<size*4;jj++)
                    ans.at(jj)+='z';
                    break; 

        }
        for(int ii=0;ii<ans.size();ii++)
    {
        cout << ans.at(ii) << endl;
    }
    for(int ii = digits.length()-2;ii>=0;ii--)
    {
        size=ans.size();
        for(int jj=0;jj<2;jj++)
        {
            for(int kk=0;kk<size;kk++)
            {
                ans.push_back(ans.at(kk));
            }
        }

        switch(digits[ii])
        {
            case '2':
                for(int jj=0;jj<size;jj++)
                    ans.at(jj)='a'+ans.at(jj);
                for(int jj=size;jj<size*2;jj++)
                    ans.at(jj)='b'+ans.at(jj);
                for(int jj=size*2;jj<size*3;jj++)
                    ans.at(jj)='c'+ans.at(jj);  
                    break;  

            case '3':
                for(int jj=0;jj<size;jj++)
                    ans.at(jj)='d'+ans.at(jj);
                for(int jj=size;jj<size*2;jj++)
                    ans.at(jj)='e'+ans.at(jj);
                for(int jj=size*2;jj<size*3;jj++)
                    ans.at(jj)='f'+ans.at(jj);   
                    break;  

            case '4':
                for(int jj=0;jj<size;jj++)
                    ans.at(jj)='g'+ans.at(jj);
                for(int jj=size;jj<size*2;jj++)
                    ans.at(jj)='h'+ans.at(jj);
                for(int jj=size*2;jj<size*3;jj++)
                    ans.at(jj)='i'+ans.at(jj);  
                    break;  

            case '5':
                for(int jj=0;jj<size;jj++)
                    ans.at(jj)='j'+ans.at(jj);
                for(int jj=size;jj<size*2;jj++)
                    ans.at(jj)='k'+ans.at(jj);
                for(int jj=size*2;jj<size*3;jj++)
                    ans.at(jj)='l'+ans.at(jj); 
                    break;  

            case '6':
                for(int jj=0;jj<size;jj++)
                    ans.at(jj)='m'+ans.at(jj);
                for(int jj=size;jj<size*2;jj++)
                    ans.at(jj)='n'+ans.at(jj);
                for(int jj=size*2;jj<size*3;jj++)
                    ans.at(jj)='o'+ans.at(jj);  
                    break;  

            case '7':
                for(int kk=0;kk<size;kk++)
                {
                    ans.push_back(ans.at(kk));
                }
                for(int jj=0;jj<size;jj++)
                    ans.at(jj)='p'+ans.at(jj);
                for(int jj=size;jj<size*2;jj++)
                    ans.at(jj)='q'+ans.at(jj);
                for(int jj=size*2;jj<size*3;jj++)
                    ans.at(jj)='r'+ans.at(jj); 
                for(int jj=size*3;jj<size*4;jj++)
                    ans.at(jj)='s'+ans.at(jj); 
                    break;  

            case '8':
                for(int jj=0;jj<size;jj++)
                    ans.at(jj)='t'+ans.at(jj);
                for(int jj=size;jj<size*2;jj++)
                    ans.at(jj)='u'+ans.at(jj);
                for(int jj=size*2;jj<size*3;jj++)
                    ans.at(jj)='v'+ans.at(jj); 
                    break;  

            case '9':
                for(int kk=0;kk<size;kk++)
                {
                    ans.push_back(ans.at(kk));
                }
                for(int jj=0;jj<size;jj++)
                    ans.at(jj)='w'+ans.at(jj);
                for(int jj=size;jj<size*2;jj++)
                    ans.at(jj)='x'+ans.at(jj);
                for(int jj=size*2;jj<size*3;jj++)
                    ans.at(jj)='y'+ans.at(jj); 
                for(int jj=size*3;jj<size*4;jj++)
                    ans.at(jj)='z'+ans.at(jj);
                    break;  

        }
    }
    for(int ii=0;ii<ans.size();ii++)
    {
        cout << ans.at(ii) << endl;
    }

    return ans;
    //short = 
    //letterCombinations(shortdi);
}

int main()
{
    letterCombinations("8");
    //letterCombinations("");
    //letterCombinations("2");
}