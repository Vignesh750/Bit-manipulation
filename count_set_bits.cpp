#include <iostream>
using namespace std;

//! Program to count the number of set bits in a number n;
//! The bitwise and of any number is 1 if the number is odd else the bitwise and is 0;

int naive(int n)
{
  int res = 0;
  while (n != 0)
  {
    if (n % 2 != 0) //* if((n%1)==1)
    {
      res = res + 1;
    }
    n = n >> 1;
    // Here n = n/2 can also be done
  }
  return res;
  //* The time complexity is theta(total bits in n)
}

int brian_kerningam_algorithm(int n)
{
  //* takes time equal to number of set bits
  //* When we subtract 1 from a number then the result (in binary form will have all the bits as zero that are after the left most set bit and the set bit becomes 0)
  //* if    n = 40 => 10(1)(000)
  //* then n-1= 39 => 10(0)(111)
  //* The number zero bits after the left most set bit becomes as set bits and the set bit becomes a 0 bit;
  int res = 0;
  while (n != 0)
  {
    n = n & (n - 1);
    res++;
  }
  return res;
  //* This algorithm takes theta(no of set bits) time to run.
}
int main()
{
  cout << naive(5);
  return 0;
}