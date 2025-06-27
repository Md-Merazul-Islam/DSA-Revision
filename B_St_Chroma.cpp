#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        // Create a vector with numbers from 0 to n-1
        vector<int> p(n);
        for (int i = 0; i < n; ++i) {
            p[i] = i;
        }

        if (x == n - 1) {
            // If x is n-1, reverse the array to maximize its appearance
            reverse(p.begin(), p.end());
        } else {
            // Move x to the front of the array to maximize its appearance
            p.erase(remove(p.begin(), p.end(), x), p.end());
            p.insert(p.begin(), x);
        }

        // Output the resulting permutation
        for (int i = 0; i < n; ++i) {
            cout << p[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    solve();
    return 0;
}
