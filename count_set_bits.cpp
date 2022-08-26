#include <iostream>
using namespace std;
int one(int n)
{
  int res = 0;
  while (n != 0)
  {
    if (n % 2 != 0)
    {
      res = res + 1;
    }
    n = n >> 1;
  }
  return res;
}

int main()
{
  cout << one(5);
  return 0;
}