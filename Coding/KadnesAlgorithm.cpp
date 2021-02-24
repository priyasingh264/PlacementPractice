// Kadnes Algorithm fro finding maximum sum sub-array

#include <iostream>

using namespace std;

int findSum(int a[],int n) 
{
    int max=0;
    int temp=a[0];
    for (int i=1;i<n;i++)
    {
    if (a[i]<=temp+a[i]) {
        temp = temp+a[i];
    } else {
        temp = a[i];
    }
    if (max < temp)
    {
        max = temp;
    }
    }
    return max;
}

int main()
{
    int a[] = {-2, 3,4,-2,7};
    int n = sizeof(a)/sizeof(int);
    cout<<"Maximum Sum Subarray is :- "<<findSum(a,n);

    return 0;
}
