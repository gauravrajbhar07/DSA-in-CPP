/*
* * * * *
  * * * *
    * * *
      * *
        *  
*/


#include <iostream>
using namespace std;

int main(){
    int n = 5 ;

    for (int i = 1 ; i<=5;i++){
      int star = n - i + 1;
      for (int j = 0;j<=i;j++){
        cout<<" ";
      }
      for (int k = 1; k < star; k++)
      {
        cout<<"*";
      }
      cout<<endl;
      
    }
}