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
        
        int col = 1 ;
        
        int value = 'A' + n - row;
        while (col <= row )
        {
            cout<<char(value)<<" ";
            value++;
            col++;
            
        }
        row++;
        cout<<endl;
    }
}