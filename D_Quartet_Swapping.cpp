#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        vector<int> o, e;
        for (int i = 0; i < n; i++){
            if(i % 2 == 0) o.push_back(a[i]);
            else e.push_back(a[i]);
        }
        sort(o.begin(), o.end());
        sort(e.begin(), e.end());
        int oI = 0, eI = 0;
        vector<int> res(n);
        for (int i = 0; i < n; i++){
            if(i % 2 == 0) res[i] = o[oI++];
            else res[i] = e[eI++];
        }
        for (int x : res) cout << x << " "; cout << endl;
    }
    
    return 0; 
}