// Program to find frequency of an element in an Array

#include<bits/stdc++.h>
using namespace std;

void
count (int arr[], int n)
{
  map < int, int >mp;
  for (int i = 0; i < n; i++)
    {
      mp[arr[i]]++;
    }

for (auto x:mp)
    {
      cout << x.first << " Occured :- " << x.second << " times" << "\n";
    }
}


int main ()
{
  int arr[] = { 1, 2, 3, 2, 3, 1, 2, 3, 3 };	// 1 -> 2 ; 2 -> 3 ; 3 -> 4
  int n = sizeof (arr) / sizeof (int);
  count (arr, n);
  return 0;
}
