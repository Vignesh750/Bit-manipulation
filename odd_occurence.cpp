#include <iostream>
using namespace std;

//! Program to find the only odd occuring number( a number which
//! is present only one time)in an array.

int naive(int arr[], int n)
{
  for (int i = 0; i < n, i++)
  {
    int count = 0;
    for (int j = 0; j < n; j++)
    {
      if (arr[i] == arr[j])
      {
        count++;
      }
    }
    if (count % 2 == 0)
    {
      continue;
    }
    else
    {
      return arr[i];
    }
  }
  //* This method takes O(n*n) time to run
}
int efficient(int arr[], int n)
{
  //* x^0=x
  //* x^y = y^x         (x-or operator is commutative )
  //* x^(y^z)=(x^y)^z   (x-or operator is associative )
  //* x^x = 0
  //* So if a number occurs even number of times then it cancels out itself
  //* arr = [1,1,2,2,3,4,4] then (1^1)=0, (2^2)=0, (4^4)=0 , (0^0^0^3)=3

  int x = arr[0];
  for (int i = 1; i < n; i++)
  {
    x = x ^ arr[i];
  }
  return x;
  //* This algorithm takes O(n) time and O(1) space.
}
int main()
{

  return 0;
}