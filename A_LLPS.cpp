#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    string s; cin >> s;
    char maxi = *max_element(s.begin(), s.end());
    string res;
    for(int i = 0; i < s.size(); i++) if (s[i] == maxi) res += maxi;
    cout << res;
    return 0; 
}