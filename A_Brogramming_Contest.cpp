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
        string s; cin >> s;
        
        int m = 0;
        if(s[0]=='1') m++;
        
        for(int i = 1; i < n; i++) if(s[i] != s[i-1]) m++;
        cout << m << endl;
    }
    return 0;
}