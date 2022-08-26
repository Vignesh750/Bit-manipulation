#include <iostream>
using namespace std;

//! Program to find if the given number is a power of two.

bool efficient1(int n)
{
  //* The Brian Cunningham algorithm is used to find if a number is a power of two.
  //* in a number,which is a power of two, exactly one bit is set.
}

bool naive(int n)
{
  if (n == 0)
  {
    return false;
  }
  while (n != 1)
  {
    if (n % 2 == 1)
    {
      return false;
    }
    n /= 2;
  }
  return true;
}
bool efficient2(int n)
{ //* if the result of a number n when it is AND ed with n-1 is zero , then the number n is a power of 2
  //* the above and operation unsets all the bits if it is a power of 2
  if (n == 0)
  {
    return false;
  }
  return (n & (n - 1) == 0)
}
int main()
{
  int n;
  cout << "Enter the value of n : ";
  cin >> n;
  string res_naive = naive(n) ? "Yes" : "No";
  string res_efficient1 = efficient1(n) ? "Yes" : "No";
  string res_efficient2 = efficient2(n) ? "Yes" : "No";
  cout << "The result by efficient method 1 is " << res_efficient1;
  cout << "The result by efficient method 2 is " << res_efficient2;
  cout << "The result by naive method is " << res_naive;
  return 0;
}