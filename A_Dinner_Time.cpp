#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n, m, p, q; cin >> n >> m >> p >> q;
        if(n % p == 0) {
            if(m == (n / p) * q) cout << "YES\n";
            else cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }
    return 0; 
}