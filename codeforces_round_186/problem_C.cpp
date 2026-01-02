#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

void solve() {
    int n;
    cin >> n;

    long long curr = n;
    vector<int> arr1(n), arr2(n), arr3(n);

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> arr3[i];
    }

    long long count1 = 0;
    for (int i = 0; i < n; i++) {
        bool isValid = true;
        for (int j = 0; j < n; j++) {
            if (arr1[j] >= arr2[(j + i) % n]) {
                isValid = false;
                break;
            }
        }
        if (isValid) count1++;
    }

    long long count2 = 0;
    for (int i = 0; i < n; i++) {
        bool isValid = true;
        for (int j = 0; j < n; j++) {
            if (arr2[j] >= arr3[(j + i) % n]) {
                isValid = false;
                break;
            }
        }
        if (isValid) count2++;
    }

    cout << curr * count1 * count2 << "\n";
}

int main() {
    int t;
    cin >> t; 
    while(t--) {
        solve();
    }
    return 0;
}