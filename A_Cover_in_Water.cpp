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
        int n, m; cin >> n >> m;
        string x, s; cin >> x >> s;

        int count = 0;
        while(true){
            if(x.find(s) != string::npos){
                cout << count << endl;
                break;
            }
            else{
                x = x + x;
                count++;
            }
        }
    }
    return 0;
}