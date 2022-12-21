#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size ,int key){
    int start = 0 ;
    int end = size - 1;

    int mid = start + (end - start)/2;


    while(start <= end){
        //mid case : match case
        if(arr[mid] == key){
            return mid;
        }
        //if arr[mid] < key

        if(arr[mid] < key){
            start = mid + 1; 
        }

        //if arr[mid] > key
        if(arr[mid] > key){
            end = mid - 1; 
        }

        mid = start + (end - start)/2;

    }

    return -1;
    
}



int main() {
	
    int arr[6]= {5,11,13,17,19,27};
    int arr2[5]= {5,11,13,17,27};
    
    int size = sizeof(arr)/sizeof(int);
    int key = 27;

    //calling a function
    int ans = BinarySearch(arr2,size,key);
    cout<<"index of key "<<key<<" : "<<ans<<endl;


	return 0;
}
