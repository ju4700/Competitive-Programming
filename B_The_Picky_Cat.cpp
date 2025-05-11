#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        int m = (n + 1) / 2;
        bool p = false;
        auto cm = [&](int p) -> bool {
            if(p == 0) return true;
            if(p > 0) {
                int f = 0;
                for (int i = 1; i < n; i++) if(abs(a[i]) < p) f++;
                return f <= (m - 1);
            }
            int af = 0;
            for (int i = 1; i < n; i++) if(abs(a[i]) > abs(p)) af++;
            return af >= (m - 1);
        };
        if(cm(a[0]) || cm(-a[0])) p = true;
        cout << (p ? "YES" : "NO") << "\n";
    }
    return 0;
}