#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n << endl;
    for (int i = 1; i <= 32; i++) {
        double a = pow(n, 1.0 / i);
        if (pow(round(a), i) == n) {
            cout << "=" << round(a) << "^" << i << endl;
        }
    }
    return 0;
}
