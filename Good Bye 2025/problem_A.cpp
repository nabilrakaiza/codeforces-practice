#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

void solve() {
    string text;
    cin >> text;

    int count = 0;

    for (char c : text) {
        if (c == 'Y') {
            count += 1;
        }

        if (count > 1) {
            break;
        }
    }

    if (count > 1) {
        cout << "NO" << "\n";
    }
    else {
        cout << "YES" << "\n";
    }
    
}

int main() {
    int t;
    cin >> t; 
    while(t--) {
        solve();
    }
    return 0;
}