#include <iostream>
using namespace std;


int getmax(int A[], int N)
{
    int max = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }

    return max;
}


int getmin(int A[], int N)
{
    int min = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    return min;
}

int main()
{

    int A[5] = {-2 ,1 ,-4 ,5 ,3};
    int N = 5;

    int a = getmax(A, N);
    cout<<a<<endl;

    int b = getmin(A, N);
    cout<<b<<endl;
    int sum = a + b;

   cout<<"sum : " <<sum;
}