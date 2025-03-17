#include <bits/stdc++.h>
using namespace std;

typedef long long ll; typedef long double ld;
typedef vector<ll> v64; typedef vector<int> v32;
typedef pair<int, int> pi; typedef pair<ll, ll> pl;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
const ll MOD = 998244353;
 
int main(){
    fastio();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll c1 = 0, w = 0, res = 0;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            if(x == 1)c1 = (c1 + 1) % MOD;
            else if(x == 2) w = (w * 2 + c1) % MOD;
            else if(x == 3) res = (res + w) % MOD;
        }
        cout << res % MOD << endl;
    }
    return 0;
}