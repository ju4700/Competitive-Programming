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
        int n, m; cin >> n >> m;
        vector<v32> a(n, v32(m));
        unordered_map<int,int> cm;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> a[i][j]; cm[a[i][j]] = 1;
            }
        }
        
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if(i+1 < n && a[i][j] == a[i+1][j]) cm[a[i][j]] = 2;
                if(j+1 < m && a[i][j] == a[i][j+1]) cm[a[i][j]] = 2;
            }
        }
        
        ll tc = 0; int mc = 0;
        for(auto &p: cm){
            tc += p.second; mc = max(mc, p.second);
        }
        if(cm.size() == 1) cout << 0 << endl;
        else cout << tc - mc << endl;
    }
    return 0;
}