#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 
typedef long double ld;
typedef vector<ll> v64; 
typedef vector<int> v32;
typedef pair<int, int> pi; 
typedef pair<ll, ll> pl;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    fastio();

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        v32 b(n); for (int i = 0; i < n; i++) cin >> b[i];

        v32 a; a.push_back(b[0]);
        for (int i = 1; i < n; i++) {
            if(b[i-1] <= b[i]) a.push_back(b[i]);
            else {
                a.push_back(b[i]);
                a.push_back(b[i]);
            }
        }
        cout << a.size() << endl;
        for(auto num : a) 
            cout << num << " ";
        cout << endl;
    }
    return 0;
}