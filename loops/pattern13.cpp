/*
A 
B B 
C C C
D D D D
E E E E E
*/

#include <iostream>
using namespace std;

int main(){
    int row = 1 ;
    int n = 5;
    int ch = 'A';
    while(row <= n ){
        int col = 1 ;
        while (col <= row )
        {
            cout<<char(ch);
            col++;
        }
        ch++;
        row ++;
        cout<<endl;
    }
}