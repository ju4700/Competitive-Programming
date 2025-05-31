#include <bits/stdc++.h>
using namespace std;

pair<int,int> sD(long long L, long long pos) {
    long long mn = min(pos, L - pos + 1), mx = max(pos, L - pos + 1);
    int base = 1 + (mn > 1 ? 64 - __builtin_clzll(mn - 1) : 0);
    int extra = (2 * mn < mx);
    return {base + extra, extra};
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n, m, a, b;
        cin >> n >> m >> a >> b;
        auto pr = sD(n, a), pc = sD(m, b);
        int ans = pr.first + pc.first - (pr.second + pc.second > 0);
        cout << ans << '\n';
    }
    return 0;
}