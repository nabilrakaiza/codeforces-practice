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

    string answer;

    if (arr[0] == 0 and arr[n-1] == 0) {
        answer = "Bob";
    } else {
        answer = "Alice";
    }

    cout << answer << "\n";

    // if the subarray has zero, then the result will always be one
    // if the subarray is all one, then the result is zero

    // alice wins if final number is zero, which means that the subarray before the final number should be all ones 
    // bob wins if final number is one, which means that the subarray before final number has one zero

    // so, alice need to make sure that after her turn, there should be no zero inside that, unless bob will win

}

int main() {
    int t;
    cin >> t; 
    while(t--) {
        solve();
    }
    return 0;
}