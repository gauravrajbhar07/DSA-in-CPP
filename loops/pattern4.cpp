/*
3 2 1
3 2 1
3 2 1
*/


#include <iostream>
using namespace std;

int main(){
    int n = 3;
    for (int i = 1; i<=n ;i++){
        for (int j = n;j>=1 ; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}