// UVa 11292 - Dragon of Loowater
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    while (cin >> n >> m && (n || m)) {
        vector<int> h(n), k(m);
        for (int i = 0; i < n; ++i) {
            cin >> h[i];
        }
        for (int i = 0; i < m; ++i) {
            cin >> k[i];
        }
        sort(h.begin(), h.end());
        sort(k.begin(), k.end());
        long long c = 0;
        int i = 0, j = 0;
        while (i < n && j < m) {
            if (k[j] >= h[i]) {
                c += k[j];
                ++i;
                ++j;
            } else {
                ++j;
            }
        }
        if (i == n) {
            cout << c << endl;
        } else {
            cout << "Loowater is doomed!\n";
        }
    }
    return 0;
}