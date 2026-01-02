#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

void solve() {
    int n;
    cin >> n;

    if (n == 1){
        cout << 0 << "\n";
        return;
    }

    vector<int> arr(n+1);

    long long count = 0;

    for (int i = 0; i <= n; i++) {
        cin >> arr[i];
        count += arr[i];
    }

    int remainder = count % n;
    int cc = n - remainder + 1;
    long long answer = factorial(remainder) * factorial(remainder) % 998244353;

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