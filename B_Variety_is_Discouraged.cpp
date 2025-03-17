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
        v32 a(n+1);
        for (int i = 1; i <= n; i++) cin >> a[i];
        
        v32 freq(n+1, 0);
        for (int i = 1; i <= n; i++) freq[a[i]]++;
        
        int len = 0, bl = 0, br = 0;
        int cl = 1, clen = 0;
        for (int i = 1; i <= n; i++){
            if(freq[a[i]] == 1){
                if(clen == 0) cl = i;
                clen++;
            } else {
                if(clen > len){
                    len = clen;
                    bl = cl;
                    br = i - 1;
                } clen = 0;
            }
        }
        
        if(clen > len){
            len = clen; bl = cl;
            br = n;
        }

        if(len == 0) cout << 0 << endl;
        else cout << bl << " " << br << endl;
    }
    return 0;
}