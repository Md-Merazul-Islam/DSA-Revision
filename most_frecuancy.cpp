#include <bits/stdc++.h>
using namespace std;
#define ll long long

void ans(vector<int> nums, int k)
{
    map<int, int> mp;
    
    // Count frequencies
    for (auto it : nums)
    {
        mp[it]++;
    }

    // Convert the map to a vector of pairs for sorting
    vector<pair<int, int>> vpp(mp.begin(), mp.end());

    // Sort the vector of pairs by the second element (frequency) in descending order
    sort(vpp.begin(), vpp.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;  // descending order by frequency
    });

    // Print the sorted vector
    for (auto it : vpp)
    {
        cout << it.first << " - " << it.second << endl;
    }
}

int main()
{
    int n, k;
    cin >> n >> k;  // Read size of array and k
    
    vector<int> a(n); // Initialize vector of size n
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];  // Read elements into the vector
    }

    ans(a, k);  // Call the ans function

    return 0;
}
