#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0, nowMin = 0;
    bool isLow = false;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if (t < nowMin) {
            isLow = true;
        }
        if (t > nowMin && isLow) {
            sum++;
            isLow = false;
        }
        nowMin = t;
    }
    cout << sum << endl;
    return 0;
}
