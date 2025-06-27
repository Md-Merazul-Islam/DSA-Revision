#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n = 15;
  for (int i = 1; i <= n; i++)
  {
    // cout << i << endl;
    int x = i;
    while (x > 0)
    {
      int digit = x % 10;
      cout << x % 10 << " ";
      x /= 10;
    }
    cout << endl;
  }
  return 0;
}