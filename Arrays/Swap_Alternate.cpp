#include <iostream>
using namespace std;

//printing a array :
void print(int arr[],int size){

    for(int i = 0 ; i <size ; i++){
        cout<<arr[i]<<" ";

    }
}



//swap alternate
void swapAlternate(int arr[],int size ){
    for(int i = 0 ; i < size ; i = i + 2){
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }

}


int main()
{

    //even : 
    int arr[5] = {1,2,3,4,5};
    int even[8] = {1,2,3,4,5,6,7,8};

    int size = sizeof(arr)/sizeof(int);
    int size1 = sizeof(even)/sizeof(int);
    swapAlternate(arr,size);
    print(arr,size);
    cout<<endl;
    swapAlternate(even,size1);
    print(even,size1);


}