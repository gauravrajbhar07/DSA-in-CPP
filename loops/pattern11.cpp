/*
A B C 
D E F
G H I

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
            cout<<char(ch++)<<" ";
            col++;
        }
        cout<<endl;
        row++;

    }
}