/*
D 
C D 
B C D 
A B C D 
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
            int value = ch + n - row;
            cout<<char(value)<<" ";
            value++;
            col++;
            
        }

      
        row++;
        cout<<endl;
    }
}