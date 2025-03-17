#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        vector<string> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        int oR = 0;
        vector<int> b(m, 0);
        for (int i = 0; i < n; i++){
            int r = 0;
            for (int j = 0; j < m; j++){
                int bit = a[i][j] - '0';
                r ^= bit; 
                b[j] ^= bit;
            }
            if (r == 1) oR++;
        }
        int oc = 0;
        for (int j = 0; j < m; j++) if (b[j] == 1) oc++;
        cout << max(oR, oc) << "\n";
    }
    
    return 0;
}