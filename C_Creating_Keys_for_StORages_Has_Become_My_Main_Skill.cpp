#include <bits/stdc++.h>
using namespace std;

typedef long long ll; typedef long double ld;
typedef vector<ll> v64; typedef vector<int> v32;
typedef pair<int, int> pi; typedef pair<ll, ll> pl;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        
        vector<int> a(n);
        
        if (n == 1) {
            cout << x << endl;
            continue;
        }
        
        // Generate consecutive integers from 0 to n-2
        for (int i = 0; i < n - 1; i++) {
            a[i] = i;
        }
        
        // Calculate the OR of all elements except the last
        int orSum = 0;
        for (int i = 0; i < n - 1; i++) {
            orSum |= a[i];
        }
        
        // Calculate the last element
        a[n-1] = x ^ orSum;
        
        // Check if the last element conflicts with any existing element
        bool conflict = false;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == a[n-1]) {
                conflict = true;
                break;
            }
        }
        
        // If conflict, use a different approach
        if (conflict) {
            // Reset the array
            for (int i = 0; i < n; i++) {
                a[i] = 0;
            }
            a[0] = x;  // First element is x, rest are 0
        }
        
        // Output the array
        for (int i = 0; i < n; i++) {
            cout << a[i];
            if (i < n - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}