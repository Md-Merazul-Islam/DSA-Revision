#include <bits/stdc++.h>

using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  vector<int> c;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    // c.push_back(a[i]);
  }
  for (int i = 0; i < n; i++)
  {
    cin >> b[i];
    // c.push_back(b[i]);
  }
  
  c.insert(c.end(), b.begin(),b.end());
  c.insert(c.end(), a.begin(),a.end());

  for (int i = 0; i < c.size(); i++)
  {

    cout << c[i] << " ";
  }

  return 0;
}