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
        v32 a(n); for(int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        int m = a[0];
        int co = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == m) co++;
            else break;
        }
        
        if(co == n) cout << -1 << "\n";
        else {
            vector<int> b, c;
            for (int i = 0; i < co; i++) b.push_back(a[i]);
            for (int i = co; i < n; i++) c.push_back(a[i]);
        
            cout << b.size() << " " << c.size() << endl;
            for (int x : b) cout << x << " ";
            cout << endl;
            for (int x : c) cout << x << " ";
            cout << endl;
        }
    }
    return 0;
}