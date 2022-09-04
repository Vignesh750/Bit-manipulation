#include <iostream>
using namespace std;
//! Given an array of n numbers that has values in the range[1....n-1] .
//! Every number appears exactly once in the array
//! so one number is repeated
//! Program to find that repeated number
//! The idea is based on the fact that x ^ x = 0 and if x ^ y = z then x ^ z = y
//! size of array = 5
//! The range of the elements is given by 1 to 4
//! the elements are {1,2,3,4,4}
//! {1,2,3,4}

int find(int arr[], int n)
{
  int x = arr[0];
  for (int i = 1; i < n; i++)
  {
    x = x ^ arr[i];
    x = x ^ i;
  }
  return x;
}

int findRepeating(int arr[], int N)
{

  // res is going to store value of
  // 1 ^ 2 ^ 3 .. ^ (N-1) ^ arr[0] ^
  // arr[1] ^ .... arr[N-1]
  int res = 0;
  for (int i = 0; i < N - 1; i++)
    res = res ^ (i + 1) ^ arr[i];
  res = res ^ arr[N - 1];
  return res;
}
int main()
{
  int arr[] = {1, 2, 2};
  cout << findRepeating(arr, 3);
  cout << find(arr, 3);

  return 0;
}