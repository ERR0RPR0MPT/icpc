#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        bool isPrime = true;
        for (int j = 2; j*j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
            }
        }
        if (isPrime) { sum++; }
    }
    cout << sum << endl;
    return 0;
}
