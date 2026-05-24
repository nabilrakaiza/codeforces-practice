#include <iostream>
#include <cmath>
#include <vector>     // Added
#include <algorithm>  // Added
using namespace std;

// Fast I/O
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

// Type aliases for convenience
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

// Useful macros
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {
    int n;
    int mx = 0;
    int mn = 1000;
    cin >> n;

    vi a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }

    float res = mx - mn;
    res = res / 2;
    int r = round(res);
    cout << r << "\n";
}

int main() {
    fast_io();
    
    int t;
    if (!(cin >> t)) return 0; // Read number of test cases
    while (t--) {
        solve();
    }
    
    return 0;
}