#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, sum = 0;
    cin >> n >> x;
    for (int i = 1; i <= n; i++) {
        int copyI = i;
        while (copyI > 0) {
            int m = copyI % 10;
            if (m == x) {
                sum++;
            }
            copyI /= 10;
        }
    }
    cout << sum;
    return 0;
}
