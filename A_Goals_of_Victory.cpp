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
        ll n; cin >> n; v64 a(n-1);
        ll sump = 0;
        ll summ = 0;
    
        for(int i = 0; i < n-1; i++){
            cin >> a[i];
            if(a[i] > 0) sump += a[i];
            else summ += a[i];
        }
        ll ans = max(sump, abs(summ)) - min(sump, abs(summ));
        if(abs(summ) > sump) cout << ans << endl;
        else cout << -ans << endl;
    }
    return 0;
}