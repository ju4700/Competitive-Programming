// Kattis - Longest Increasing Subsequence (Contiguous Variant)
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    while (cin >> n) {
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int ml = 1, l = 0;
        for (int r = 1; r < n; ++r) {
            if (a[r] <= a[r - 1]) {
                l = r;
            }
            ml = max(ml, r - l + 1);
        }
        cout << ml << endl;
    }
    return 0;
}