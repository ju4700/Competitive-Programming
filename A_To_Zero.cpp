#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--){
        long long n, k; cin >> n >> k;
        long long d = k - 1;
        long long ans = 0;
        if(n % 2 == 1){
            if(n <= k) ans = 1;
            else {
                ans = 1;
                n -= k;
                ans += (n + d - 1) / d;
            }
        } else {
            if(n <= d) ans = 1;
            else ans = (n + d - 1) / d;
        }
        cout << ans << "\n";
    }
    return 0;
}