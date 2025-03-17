#include <iostream>
#include <vector>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> arr(n - 2);
        for (ll i = 0; i < n - 2; i++) {
            cin >> arr[i];
        }

        if (n == 3) {
            cout << "YES\n";
            continue;
        }

        bool possible = true;
        for (ll i = 0; i < n - 2; i++) {
            if (i + 2 < n && arr[i] == 1 && arr[i + 1] == 0 && arr[i + 2] == 1) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES\n" : "NO\n");
    }

    return 0;
}
