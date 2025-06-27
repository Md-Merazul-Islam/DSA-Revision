#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  char s[1000];
  cin >> s;
  int count[26] = {0};
  int i = 0;
  while (s[i] != '\0')
  {
    count[s[i] - 97]++;
    i++;
  }
  for (int i = 0; i < 26; i++)
  {
    if (count[i] > 0)
    {
      cout << char(i + 97) << " - " << count[i] << " ";
      cout << endl;
    }
  }
  return 0;
}
