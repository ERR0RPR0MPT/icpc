#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int minValue = INT_MAX;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        minValue = min(minValue, t);
    }
    cout << minValue << endl;
    return 0;
}
