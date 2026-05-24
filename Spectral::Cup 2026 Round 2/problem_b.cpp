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
    cin >> n;
    vll a(n);
    vll b(n);

    ll total = 0;

    for (int i = 0; i<n; i++){
        cin >> a[i];
        total += a[i];
    }

    for (int i = 0; i<n; i++){
        cin >> b[i];
        total += b[i];
    }

    int index = 0;
    ll curr = 0;
    ll curry = 0;
    
    for (int i = 0; i<n; i++){
        ll ps = min(a[i], b[i]);
        ll pss = max(a[i], b[i]);
        
        if (ps > curr){
            index = i;
            curr = ps;
            curry = pss;
        }
        if (ps == curr && curry > pss){
            index = i;
            curr = ps;
            curry = pss;
        }
    }

    for (int i = 0; i<n; i++){
        if (i == index){
            continue;
        }

        total -= min(a[i], b[i]);
    }

    cout << total << "\n";

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