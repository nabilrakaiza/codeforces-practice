#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

void solve() {
    int a;
    int b;

    cin >> a;
    cin >> b;

    int mx = max(a, b);
    int mn = min(a, b);

    int r = 4;

    // possiblity 1, max is start at the top, min start at second-top
    int n1 = log((3 * mx) + 1) / log(4);
    int n2 = log((3 * mn / 2) + 1) / log(4);

    int p1 = min(2*n1 - 1, 2*n2);

    // possibility 2, max start at second-top, min start at top
    n1 = log((3 * mn) + 1) / log(4);
    n2 = log((3 * mx / 2) + 1) / log(4);

    int p2 = min(2*n1 - 1, 2*n2);

    int answer = max(p1, p2) + 1;

    cout << answer << "\n";
}

int main() {
    int t;
    cin >> t; 
    while(t--) {
        solve();
    }
    return 0;
}