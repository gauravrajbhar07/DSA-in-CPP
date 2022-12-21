#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int n;
	cin>>n;
	for(int i = 0 ;i<n;i++){
	    int arrsize;
	    cin>>arrsize;
        int friendsarray[arrsize];
	    for(int j = 0 ; j < arrsize ; j++){
            cin>>friendsarray[j];
	    }

        int min = friendsarray[0];
		int k = 1;
        while(k!=arrsize){
			if(friendsarray[k] < min){
				min=friendsarray[k];
			}
			k++;
		}
        cout<<min<<endl;

	}

	return 0;
}
