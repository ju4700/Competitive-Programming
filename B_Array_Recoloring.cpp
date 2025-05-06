#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
  
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        // Sort array in descending order
        sort(a.begin(), a.end(), greater<ll>());
  
        // The optimal answer equals the sum of the (k+1) largest elements.
        ll ans = 0;
        for (int i = 0; i < k+1; i++){
            ans += a[i];
        }
  
        cout << ans << "\n";
    }
    
    return 0;
}