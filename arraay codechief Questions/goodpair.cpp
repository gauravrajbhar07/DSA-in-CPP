#include <iostream>
using namespace std;

int main()
{
    // int count = 0;
    // int size = 6;
    // int nums[6] = {1, 2, 3, 1, 1, 3};
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = i + 1; j < size; i++)
    //     {
    //         if (nums[i] == nums[j])
    //         {
    //             count++;
    //             cout<<"("<<i<<", "<<j<<")"<<endl;
    //         }
    //     }
    // }

    // cout<<count;

    int count = 0;
    int size = 6;
    int nums[6] = {1, 2, 3, 1, 1, 3};
    int i = 0 ;
    int j =  i + 1;

    while(size!=0){
        if(nums[i] == nums[j]){
            i++;
            count++;
        }
        cout<<size<<endl;
        size--;
    }

    count<<count;

    


}