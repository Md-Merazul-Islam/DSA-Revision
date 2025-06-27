

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &s : v)
  {
    cin >> s;

    cout << (s > 0 ? 1 : (s < 0 ? 2 :0))<<" "; 
  }


  return 0;
}