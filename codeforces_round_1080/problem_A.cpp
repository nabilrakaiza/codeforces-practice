#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

void solve() {    
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == 67) {
            cout << "YES" << "\n";
            return ;
        }
    }

    cout << "NO" << "\n";
}

int main() {
    int t;
    cin >> t; 
    while(t--) {
        solve();
    }
    return 0;
}