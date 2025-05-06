#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(m);
        for (int i = 0; i < m; i++) cin >> a[i];
        
        vector<ll> x(m), y(m);
        for (int i = 0; i < m; i++) {
            x[i] = min(a[i], n - 1);
            y[i] = max(1, n - a[i]);
        }
        
        vector<ll> s = y;
        sort(s.begin(), s.end());
        vector<ll> p(s.size() + 1, 0);
        for (size_t i = 0; i < s.size(); i++) p[i + 1] = p[i] + s[i];
        
        auto getc = [&](ll x) -> pair<ll, ll> {
            int id = upper_bound(s.begin(), s.end(), x) - s.begin();
            return {id, p[id]};
        };
        
        ll ans = 0;
        for (int i = 0; i < m; i++) {
            ll xi = x[i];
            auto pr = getc(xi);
            ll count = pr.first;
            ll sumY = pr.second;
            ll c = (xi + 1) * count - sumY;
            if (y[i] <= xi) c -= (xi - y[i] + 1);
            ans += c;
        }
        cout << ans << endl;
    }
    return 0;
}
