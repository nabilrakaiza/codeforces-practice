#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

void solve() {
    int len;
    string text;

    cin >> len;
    cin >> text;

    int answer = len;
    int ccy = 0;

    for (int i = 0; i < len - 3; i++) {
        string curr = text.substr(i, 4);

        if (curr == "2025") {
            ccy = 1;
        }

        if (curr == "2026") {
            answer = 0;
            break;
        }

        string ny = "2026";
        string cy = "2025";

        int numberOfChanges = 0;

        for (int j = 0; j < 4; j++) {
            if (curr[j] != ny[j]) { // contains 2026
                numberOfChanges += 1;
            }
        }

        if (numberOfChanges < answer) {
            answer = numberOfChanges;
        }

        if (answer == 0) {
            break;
        }
    }
    answer = min(answer, ccy);
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