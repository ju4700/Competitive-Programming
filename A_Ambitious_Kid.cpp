#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int mini = INT_MAX, z = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == 0) z++;
        else mini = min(mini, abs(a[i]));
    }
    if(z > 0) cout << 0 << endl;
    else cout << mini << endl;

    return 0; 
}