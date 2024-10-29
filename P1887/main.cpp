#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a = n / m, b = n % m;
    int k[m + 5];
    for (int i = 0; i < m; i++) {
        k[i] = a;
    }
    for (int i = m - 1; i > 0; i--) {
        if (b > 0) {
            k[i]++;
            b--;
        }
    }
    for (int i = 0; i < m; i++) {
        if (i != 0) cout << " ";
        cout << k[i];
    }
    return 0;
}
