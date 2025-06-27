#include <bits/stdc++.h>
using namespace std;

void findTagret(vector<int> &v, int target)
{
  sort(v.begin(), v.end());
  if (binary_search(v.begin(), v.end(), target))
  {
    cout << "find it " << endl;
  }
  else
    cout << "NO" << endl;

  auto it = lower_bound(v.begin(), v.end(), target);
  cout << "smallest value " << *it << endl;

  auto iit = upper_bound(v.begin(),v.end(),target);
  cout<<"large "<<*iit<<endl;
  int idx = lower_bound(v.begin(), v.end(), target) - v.begin();
  cout<<idx<<endl;

}

int main()
{

  vector<int> a = {2, 3, 4};
  vector<int> b = {1, 2, 3, 4, 5, 6, 7};
  findTagret(b, 3);

  return 0;
}