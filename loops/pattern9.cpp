/*
A A A A A 
B B B B B
C C C C C
D D D D D
E E E E E

using while loop
*/

#include<iostream>
using namespace std;

int main(){
    int n = 5 ;
    int row = 1 ;
    char ch = 'A';
    while(row <= n ){
        int col = 1;
        while(col <= n ){
            //using char explicity change the data type 
            cout<<char(ch + row - 1)<<" ";
            col++;
        }
        cout<<endl;
        row++;

    }
}