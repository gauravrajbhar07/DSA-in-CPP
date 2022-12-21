#include <iostream>
using namespace std;


//left most occurecnce.
int FirstOccurence(int arr[], int size ,int key){
    int start = 0 ;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start)/2;


    while(start <= end){
        //mid case : match case
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;

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

    return ans;
    
}


//right most occurence 

int LastOccurence(int arr[], int size ,int key){
    int start = 0 ;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start)/2;


    while(start <= end){
        //mid case : match case
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1 ;

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

    return ans;
    
}



int main() {
	
    int arr[8]= {0,0,1,1,2,2,2,2};

    
    int size = sizeof(arr)/sizeof(int);
    int key = 2;

    //calling a function
    int First = FirstOccurence(arr,size,key);
    cout<<"First Occurence "<<key<<" : "<<First<<endl;

    int Last = LastOccurence(arr,size,key);
    cout<<"Last Occurence "<<key<<" : "<<Last<<endl;



	return 0;
}
