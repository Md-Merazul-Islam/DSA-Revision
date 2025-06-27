#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int computeGCD(const vector<int>& arr) {
    int gcd = arr[0];
    for (size_t i = 1; i < arr.size(); ++i) {
        gcd = __gcd(gcd, arr[i]);
        if (gcd == 1) break;
    }
    return gcd;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        bool allSame = true;
        for (int i = 1; i < n; ++i) {
            if (a[i] != a[0]) {
                allSame = false;
                break;
            }
        }
        if (allSame) {
            cout << "No\n";
            continue;
        }
        
        bool found = false;
        vector<int> res(n, 2);
        for (int i = 0; i < n; ++i) {
            vector<int> b = {a[i]};
            vector<int> c;
            for (int j = 0; j < n; ++j) {
                if (j != i) {
                    c.push_back(a[j]);
                }
            }
            int gcdB = computeGCD(b);
            int gcdC = computeGCD(c);
            if (gcdB != gcdC) {
                res[i] = 1;
                found = true;
                break;
            }
        }
        if (found) {
            cout << "Yes\n";
            for (int num : res) {
                cout << num << " ";
            }
            cout << "\n";
        } else {
            cout << "No\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}