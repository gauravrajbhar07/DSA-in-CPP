/*
A B C 
B C D
C D E 

using while loop
*/

#include<iostream>
using namespace std;

int main(){
    int n = 5 ;
    int row = 1 ;
    char ch = 'A';
    while (row  <= n )
    {
        int col = 1 ;
        
        while (col <= n)
        {
            int ch = 'A' +  row + col - 2;
            cout<<char(ch)<<" ";
            col++;
            ch++;
        }
        cout<<endl;
        
        
        row++;
    }
    
}