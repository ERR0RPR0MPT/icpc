#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n == 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int k;
        cin >> k;
        if (isPrime(k)) {
            cout << k << " ";
        }
    }
    cout << endl;
    return 0;
}
