

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

  int n;
  cin >> n;
  vector<int> v(n);
  int cnt =0;
  for (auto &s : v)
  {
    cin >> s;
  }

  for ( int i =1; i< n;i++){
    if(v[i]==v[i-1]){
      cnt++;
    }
    else continue;
  }
  cout<<cnt;


  return 0;
}