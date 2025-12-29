#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// you can't have uu substring inside a valid one
// and you also can't have s on the first/end of a string

// 1 need 0
// 2 need 1
// 3 need 1
// 4 need 2 (?)
// 5 need 2 (?)

// sususus

void solve() {
    string text;
    cin >> text;

    int count = 0;
    int len = text.length();

    if (text[0] == 'u') {
        count += 1;
    }

    if (text[len-1] == 'u') {
        count += 1;
    }

    int counter = 0;
    for (int i = 1; i<len-1; i++) {
        if (text[i] == 'u') {
            counter += 1;
        } else {
            count += counter / 2;
            counter = 0;
        }
    }

    count += counter / 2;
    
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