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
    
    while(row <= n ){
        int col = 1 ;
        int ch = 'A';
        while (col <= row )
        {
            cout<<char(ch + row - 1)<<" ";
            col++;
        }
        
        row ++;
        cout<<endl;
    }
}