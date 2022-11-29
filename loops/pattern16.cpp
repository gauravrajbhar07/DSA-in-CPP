/*
A 
B C 
C D E
D E F G  
E F G H I
*/

#include <iostream>
using namespace std;

int main(){
    int row = 1 ;
    int n = 5;
    
    while(row <= n ){
        int ch = 'A';
        int col = 1 ;
        while (col <= row )
        {
            cout<<char(ch + row + col - 2)<<" ";
            col++;
        }
      
        row++;
        cout<<endl;
    }
}