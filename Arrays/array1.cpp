#include <iostream>
using namespace std;


void printArray(int arr[],int size){

    cout<<"printing array : "<<endl;
    for(int i = 0 ;i<= size ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int num[15];


    cout<<"value at zero positions : "<<num[0]<<endl;
    cout<<"value at zero positions : "<<num[3]<<endl;
    cout<<"value at zero positions : "<<num[4]<<endl;
    cout<<"value at zero positions : "<<num[15]<<endl;
    cout<<"value at zero positions : "<<num[90]<<endl;
    
    cout<<"every thing is fine "<<endl;


    int arr[9] ={3,9};
    cout<<arr<<endl;

    //initialzition all location to zero 

    int arr2[4]= {0};

    int size = sizeof(arr2)/sizeof(int);
    cout<<"size : "<<size<<endl;
    printArray(arr2,size);



    
}