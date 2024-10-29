#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int m, n;
    cin >> m >> n;
    for (int i = m; i <= n; i++) {
        int t = i;
        bool isLucky = true;
        while (t > 0) {
            if (!isPrime(t)) {
                isLucky = false;
                break;
            }
            t = t / 10;
        }
        if (isLucky) {
            cout << i << endl;
        }
    }
    return 0;
}
