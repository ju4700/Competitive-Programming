#include <bits/stdc++.h>
using namespace std;

typedef long long ll; typedef long double ld;
typedef vector<ll> v64; typedef vector<int> v32;
typedef pair<int, int> pi; typedef pair<ll, ll> pl;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    fastio();

    int n; cin >> n;
    v32 a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    reverse(a.begin(), a.end());
    for(int i : a) cout << i << " ";
    cout << endl;

    return 0;
}