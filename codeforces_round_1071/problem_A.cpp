#include <iostream>
using namespace std;

void solve() {
    int k;
    int x;

    cin >> k;
    cin >> x;

    int ans = k * x + 1;

    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t; 
    while(t--) {
        solve();
    }
    return 0;
}