#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--)
    {
        /* code */
        string s;
        cin >> s;
        
        int dashCount = 0, underscoreCount = 0;
        for(char c: s) {
            if(c == '-') dashCount++;
            else if(c == '_') underscoreCount++;
        }
        int firstBlock = dashCount / 2; // floor division
        int secondBlock = underscoreCount;
        int thirdBlock = dashCount - firstBlock; // remaining dashes

        string ans(firstBlock, '-');
        ans += string(secondBlock, '_');
        ans += string(thirdBlock, '-');

        cout << ans << "\n";
    }
    
    return 0;
}