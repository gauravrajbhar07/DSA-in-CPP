/*

                1
            1   2   1
        1   2   3   2   1
    1   2   3   4   3   2   1
1   2   3   4   5   4   3   2   1

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int row = 1;

    while (row <= n)
    {


        //print space 
        int space = n - row;
        while (space)
        {
            cout <<" ";
            space--;
        }
        int col = 1;

        //first triangle 
        while (col <= row)
        {
            cout <<col;
            col++;
        }

        //second triangle 
        int tri = row - 1  ;
        while (tri)
        {   
            cout<<tri;
            tri--;
        }
        
        cout << endl;
       
        row++;
    }
}
