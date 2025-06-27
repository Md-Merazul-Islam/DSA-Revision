

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  int n;
  cin >> n;
  int a = n % 10;
  n /= 10;
  // cout << a << endl;

  int b = n % 10;
  n /= 10;
  // cout << b << endl;

  if(a ==0 || b==0){
    cout<<"NO"<<endl;

  }
  else if ( a%b==0 || b%a==0 ){
    cout<<"YES"<<endl;
  }
  else cout<<"NO"<<endl;

  return 0;
}