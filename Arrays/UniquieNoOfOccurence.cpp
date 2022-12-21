#include<iostream>
using namespace std;


// bool uniqueOccurrences(int arr[], int n) {
// 	int firstArr[100] = { 0 };
// 	int secondArr[100] = { 0 };

// 	for (int i = 0; i < n; i++)
// 	{
// 		firstArr[arr[i]]++;
// 	}

// 	for (int i = 0; i < 100; i++)
// 	{
// 		if (firstArr[i]) {
// 			secondArr[firstArr[i]]++;
// 			if (secondArr[firstArr[i]] > 1)
// 				return false;
// 		}
// 	}
// 	return true;
// }


int main(){

    int testcase1[7] = {1,2,2,2,1,1,3};
    int testcase2[2] = {1,2};
    int size = sizeof(testcase1)/sizeof(int);
    int newindex = 0;
    int newcount[size] ;
    int newsize = sizeof(newcount)/sizeof(int);
    

    for(int i = 0; i<size;i++){
        for (int  j = i+1; j < size-1; i++)
        {
            int count = 0;
            if(testcase1[i] == testcase1[j]){
                count++;
            }
            newcount[newindex] = count;
            newindex++;
        }
    }
    
    
   

    // cout<<uniqueOccurrences(testcase1,size);



}