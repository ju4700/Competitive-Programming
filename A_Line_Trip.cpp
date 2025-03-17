#include <bits/stdc++.h>
using namespace std;

typedef long long ll; typedef long double ld;
typedef vector<ll> v64; typedef vector<int> v32;
typedef pair<int, int> pi; typedef pair<ll, ll> pl;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    fastio();

    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int pn = 2 * (x - a[n-1]);
        int lg = 0;
        for(int i = 0; i < n; i++){
            int z = a[i+1] - a[i];
            if(z > lg) lg = z;
        }
        cout << max(lg, pn) << endl;
    }
    return 0;
}