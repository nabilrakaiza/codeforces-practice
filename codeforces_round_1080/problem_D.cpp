#include <iostream>
#include <vector>
using namespace std;

void solve() {    
    long long n;
    cin >> n;

    vector<long long> arr(n);
    long long asum = 0;

    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
        asum += arr[i];
    }

    asum *= 2;
    asum /= n;
    asum /= (n-1);

    vector<long long> answer(n);

    for (long long i = 1; i < n - 1; i++) {
        answer[i] = (arr[i+1] - 2*arr[i] + arr[i - 1]) / 2;
    }

    long long f1 = 0;

    for (long long i = 1; i < n-1; i++) {
        f1 += i * answer[i];
    }

    answer[n-1] = (arr[0] - f1) / (n-1);
    
    long long f2f1 = 0;

    for (long long i = 1; i<n; i++) {
        f2f1 += answer[i];
    }

    answer[0] = arr[1] - arr[0] + f2f1;


    for (long long i = 0; i < n; i++) {
        cout << answer[i] << " ";
    }

    cout << "\n";
 
}

int main() {
    int t;
    cin >> t; 
    while(t--) {
        solve();
    }
    return 0;
}