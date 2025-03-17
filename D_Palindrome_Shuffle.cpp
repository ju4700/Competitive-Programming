#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();

        // l and r track the minimum and maximum indices that are part of a mismatched pair.
        int l = n, r = -1;
        for (int i = 0; i < n / 2; i++){
            if (s[i] != s[n - 1 - i]){
                l = min(l, i);
                r = max(r, n - 1 - i);
            }
        }
        // If there is no mismatch, no shuffle is needed.
        if(r == -1) cout << 0 << "\n";
        else cout << (r - l + 1) << "\n";
    }
    return 0;
}