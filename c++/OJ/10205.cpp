#include<iostream>
using namespace std;

int main()
{
    int tc=0, n=0;
    cin >> tc >> n;
    while(tc--)
    {
    char value[13][10] ={"2", "3", "4" ,"5","6","7","8","9","10","Jack","Queen","King","Ace"};
    char suit[4][10] = {"Clubs","Diamonds","Hearts","Spades"};
    int array0[52];
    int array1[52];
    int shuffle[10][53];

    for(int ii=0; ii<52;ii++){
        array0[ii]= ii;
    }
    for(int ii=0;ii<n;ii++){
        for(int jj=0;jj<52;jj++){
            cin >> shuffle[ii][jj];
        }
    }
    int way=0;
    while(cin >> way != EOF){
        way--;
        for(int ii=0;ii<52;ii++){
            array1[ii] = array0[shuffle[way][ii]-1];
        }
        for(int ii=0;ii<52;ii++){
            array0[ii]=array1[ii];
        }
    }
    for(int ii=0;ii<52;ii++)
    {
        cout << value[array0[ii]%13] << " of " << suit[array0[ii]/13] << endl;
    }
    }

}
/*
input:
1

2
2 1 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26
27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 52 51
52 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26
27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 1
1
2

output:
King of Spades 52
2 of Clubs 2
4 of Clubs 4
5 of Clubs 5
6 of Clubs 
7 of Clubs
8 of Clubs
9 of Clubs
10 of Clubs
Jack of Clubs
Queen of Clubs
King of Clubs
Ace of Clubs
2 of Diamonds
3 of Diamonds
4 of Diamonds
5 of Diamonds
6 of Diamonds
7 of Diamonds
8 of Diamonds
9 of Diamonds
10 of Diamonds
Jack of Diamonds
Queen of Diamonds
King of Diamonds
Ace of Diamonds
2 of Hearts
3 of Hearts
4 of Hearts
5 of Hearts
6 of Hearts
7 of Hearts
8 of Hearts
9 of Hearts
10 of Hearts
Jack of Hearts
Queen of Hearts
King of Hearts
Ace of Hearts
2 of Spades
3 of Spades
4 of Spades
5 of Spades
6 of Spades
7 of Spades
8 of Spades
9 of Spades
10 of Spades
Jack of Spades
Queen of Spades
Ace of Spades
3 of Clubs
*/
