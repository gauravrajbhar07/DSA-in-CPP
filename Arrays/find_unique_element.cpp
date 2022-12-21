#include <iostream>
using namespace std;




int main()
{

    int A[11] = {5, 3 ,1, 5, 1, 3, 4, 7, 4, 8, 8};
    int size = sizeof(A)/sizeof(int);

    
    // for(int i = 0 ; i < size ; i++){
    //     for(int j = i+1 ; j < size  ; j++){
    //         if(A[i] == A[j]){
    //             A[i] = 0; 
    //             A[j] = 0;
    //         }
    //     }
        

    // }

    // for (int i = 0 ; i < size ; i++){
    //     if(A[i] != 0){
    //         cout<<A[i];
    //     }
    //}

    //better approach :
    int ans = 0 ;
    for (int i = 0 ; i < size ; i++){
        ans = ans  ^ A[i];
        cout<<"ans : "<<ans<<endl;
    }

    cout<<"final ans : "<<ans ;

    

    

}