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

    int count = 0;

    for (int i = 1; i < n; i++) {
        int first = arr[i-1];
        int second = arr[i];
        
        if (first == second || first + second == 7) {
            count += 1;

            // change second
            if (i == n-1) {
                // no need to check third
                if (first == 1 || first == 6) {
                    arr[i] = 2;
                }
                continue;
            }
            
            if (first == 1 || first == 6){
                if (arr[i + 1] == 1 || arr[i + 1] == 6) {
                    arr[i] = 2;
                    continue;
                }
                if (arr[i + 1] == 2 || arr[i + 1] == 5) {
                    arr[i] = 3;
                    continue;
                }
                if (arr[i + 1] == 3 || arr[i + 1] == 4) {
                    arr[i] = 2;
                    continue;
                }
            }

            if (first == 2 || first == 5){
                if (arr[i + 1] == 1 || arr[i + 1] == 6) {
                    arr[i] = 3;
                    continue;
                }
                if (arr[i + 1] == 2 || arr[i + 1] == 5) {
                    arr[i] = 3;
                    continue;
                }
                if (arr[i + 1] == 3 || arr[i + 1] == 4) {
                    arr[i] = 1;
                    continue;
                }
            }

            if (first == 3 || first == 4){
                if (arr[i + 1] == 1 || arr[i + 1] == 6) {
                    arr[i] = 2;
                    continue;
                }
                if (arr[i + 1] == 2 || arr[i + 1] == 5) {
                    arr[i] = 1;
                    continue;
                }
                if (arr[i + 1] == 3 || arr[i + 1] == 4) {
                    arr[i] = 1;
                    continue;
                }
            }
        }

    }

    cout << count << "\n";
}

int main() {
    int t;
    cin >> t; 
    while(t--) {
        solve();
    }
    return 0;
}