#include <iostream>
using namespace std;
//! Given an array of n numbers that has values in the range[1....n+1] .
//! Every number appears exactly once in the array
//! so one number is missing
//! Program to find that missing number

int solution(int arr[], int n)
{
  int x = arr[0];
  for (int i = 1; i < n; i++)
  {
    x = x ^ arr[i];
    x = x ^ i;
  }
  return x ^ n;
}
int main()
{
  int arr[] = {1, 4, 2};
  cout << solution(arr, 3);
  return 0;
}