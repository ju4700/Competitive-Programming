#include <bits/stdc++.h>
using namespace std;

typedef long long ll; typedef long double ld;
typedef vector<ll> v64; typedef vector<int> v32;
typedef pair<int, int> pi; typedef pair<ll, ll> pl;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    fastio(); 
    int t; cin >> t;
    while(t--) {
        int n, k, p; cin >> n >> k >> p;
        if(k == 0) {
            cout << 0 << endl;
            continue;
        }
        if(abs(k) > n * p) {
            cout << -1 << endl;
            continue;
        }
        int m = (abs(k) + p - 1) / p;
        cout << m << endl;
    }
    return 0;
}