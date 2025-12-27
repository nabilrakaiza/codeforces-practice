#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int curr = 0;
    int reduction = 0;
    int totalSum = 0;

    // first reduction
    reduction = abs(arr[1] - arr[0]);
    totalSum += reduction;

    // second to last second
    for (int i = 1; i < n - 1; i++) {
        int before = arr[i-1];
        int now = arr[i];
        int after = arr[i+1];

        totalSum += abs(after - now);

        int beforeReduction = abs(before - now) + abs(after - now);
        int afterReduction = abs(before - after);

        int totalReduction = beforeReduction - afterReduction;

        if (totalReduction > reduction) {
            curr = i;
            reduction = totalReduction;
        }
    }

    // last reduction
    int lastReduction = abs(arr[n-1] - arr[n-2]);
    if (lastReduction > reduction) {
        curr = n-1;
        reduction = lastReduction;
    }

    int answer = totalSum - reduction;

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