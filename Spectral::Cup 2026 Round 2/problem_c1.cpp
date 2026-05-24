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

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int cnt = 0;
    bool normal = true;

    int pointer = 0;
    vi r(n);

    for (int i = n-1; i >=0; i--){
        // normal
        if (normal){
            if (a[i] > 0){
                r[pointer] = i;
                pointer += 1;
                normal = !normal;
                cnt += 1;
            }
            continue;
        }

        if (a[i] < 0){
            r[pointer] = i;
            pointer += 1;
            normal = !normal;
            cnt += 1;
        }
    }

    cout << cnt << "\n";

    for (int i = 0; i < pointer; i++) {
        cout << r[i] + 1 << " ";
    }

    cout << "\n";
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