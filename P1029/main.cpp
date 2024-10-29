#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, s;
    cin >> n >> m;
    for (int i = n; i <= m; i++) {
        int j = n * m / i;
        if (gcd(i, j) == n && i * j / gcd(i, j) == m) {
            s++;
        }
    }
    cout << s << endl;
    return 0;
}
