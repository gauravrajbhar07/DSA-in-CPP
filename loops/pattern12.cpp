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
    while(row <= n ){
        int col = 1;
        int value = 'A';
        while(col <= n ){
            //using char explicity change the data type 
            cout<<char()<<" ";
            col++;
        }
        cout<<endl;
        row++;

    }
}