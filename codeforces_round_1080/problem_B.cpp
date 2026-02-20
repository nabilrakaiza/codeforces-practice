#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <unordered_set>
using namespace std;

void solve() {    
    int n;
    cin >> n;

    vector<int> arr(n + 2);
    arr[0] = -1;

    for (int i = 0; i < n; i++) {
        cin >> arr[i + 1];
    }

    for (int i = 1; i < n + 1; i++) {
        int num = i;
        int temp = i;
        bool is_found = false;

        while (temp < n + 1) {
            int curr = arr[temp];
            if (curr == num) {
                is_found = true;
                break;
            }
            temp *= 2;
        }

        temp = i;

        while (temp > 0) {
            int curr = arr[temp];
            if (curr == num) {
                is_found = true;
                break;
            }
            temp /= 2;
        }

        if (!is_found) {
            cout << "NO" << "\n";
            return;
        }
    }

    cout << "YES" << "\n";
}

int main() {
    int t;
    cin >> t; 
    while(t--) {
        solve();
    }
    return 0;
}