#include <iostream>
using namespace std;

//! Program to find if the k th bit of a number is set or not.
//! This program uses Right shift operator.

bool funct(int n, int k)
{
  if ((n >> (k - 1)) % 2 == 1)
  {
    return true;
  }
  return false;
}

int main()
{
  int k, n;
  cout << "Enter the number n : ";
  cin >> n;
  cout << "Enter the value of k : ";
  cin >> k;
  string res = funct(n, k) ? "Yes" : "No";
  cout << res;
  return 0;
}