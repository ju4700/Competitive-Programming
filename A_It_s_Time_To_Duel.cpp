#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<vector<bool>> dp(n, vector<bool>(2, false));
        int m1 = a[0];
        dp[1][m1] = true;
        for (int i = 2; i <= n - 1; i++){
            for (int prev = 0; prev < 2; prev++){
                if(!dp[i-1][prev]) continue;
                if(a[i-1] == 0){
                    if(prev == 1){
                        dp[i][0] = true;
                    }
                }
                else {
                    if(prev == 1) dp[i][1] = true;
                    else { 
                        dp[i][0] = true;
                        dp[i][1] = true;
                    }
                }
            }
        }
        bool ok = false;
        if(n-1 >= 1){
            if(a[n-1] == 0){
                if(dp[n-1][1]) ok = true;
            }
            else{
                if(dp[n-1][0]) ok = true;
            }
        }cout << (ok ? "NO" : "YES") << "\n";
    }
    return 0;
}