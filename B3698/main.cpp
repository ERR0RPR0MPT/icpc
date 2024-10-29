#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k, b, sum = 0;
    cin >> n >> k >> b;
    for (int i = 1; i <= n; i++) {
        int x, y;
        cin >> x >> y;
        if (y == k * x + b) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}
