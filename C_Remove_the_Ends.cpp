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
        int n; cin >> n;
        v64 a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<v64> ans(n, v64(n, 0));
        
        for (int i = 1; i <= n; i++){
            for (int j = 0; j <= n - i; j++){
                int r = j + i - 1;
                ll b = 0;
                
                for (int i = j; i <= r; i++){
                    if(a[i] > 0){
                        ll c = a[i];
                        if(i + 1 <= r) c += ans[i+1][r];
                        b = max(b, c);
                    } else {
                        ll c = -a[i];
                        if(i - 1 >= j) c += ans[j][i-1];
                        b = max(b, c);
                    }
                } ans[j][r] = b;
            }
        } cout << ans[0][n-1] << endl;
    }
    return 0;
}