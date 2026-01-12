#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

void solve() {    
    int n;
    int k;
    cin >> n;
    cin >> k;

    int mx = 0;

    int op = n - k + 1;

    vector<int> arr(n);
    vector<int> counter(k - 1); 

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        counter[arr[i]] += 1;
    }

    int mex;
    for (mex = 0; mex < k - 1; mex++) {
        if (counter[mex] < 1){
            break;
        }
    }

    mx = min(k-1, mex);
    cout << mx << "\n";
    
}

int main() {
    int t;
    cin >> t; 
    while(t--) {
        solve();
    }
    return 0;
}