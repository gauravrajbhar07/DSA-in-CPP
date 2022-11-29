/*
1
2 3 
4 5 6
7 8 9 10 


using while loop
*/

#include<iostream>
using namespace std;

int main(){
    int n = 5 ;
    int row = 1 ;

    while(row <= n ){
        int col = 1;
        int value = row ;
        while(col<=row){
            cout<<value<<" ";
            col++;
            value++;
        }
        cout<<endl;
        row++;

    }
}