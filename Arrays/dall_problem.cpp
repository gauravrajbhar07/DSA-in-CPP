#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main() {
	// your code goes here
	int testcase;
	cin>>testcase;
	
	for(int i = 0 ; i < testcase ; i++){
	    int no_of_doll;
	    cin>>no_of_doll;
	    int arr[no_of_doll];
	    for(int j = 0 ; j < no_of_doll ; j++){
	        cin >> arr[j];
	    }
	    
		
	
		int ans = 0 ;
    	for (int i = 0 ; i < no_of_doll ; i++){
        	ans = ans  ^ arr[i];
        
    	}
		cout<<ans;

		
		
	}
	
	
}
