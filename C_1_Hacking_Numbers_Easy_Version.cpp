#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, x;
        cin >> n >> x;
        // ONLINE‐INTERACTIVE EMULATION: always solve in 2 moves
        long long delta = n - x;
        cout << "add " << delta << "\n" << flush;  // 1st command
        cout << "!\n" << flush;                   // answer
    }
    return 0;
}