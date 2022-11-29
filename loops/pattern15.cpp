/*
A 
B C 
D E F
G H I J 
K L M N O
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
            cout<<char(ch++)<<" ";
            col++;
        }
      
        row++;
        cout<<endl;
    }
}