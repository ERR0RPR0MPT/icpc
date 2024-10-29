#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n + 1];
    a[0] = 0;
    a[1] = 0;
    for (int i = 1; i <= n; i++) {
        int k;
        cin >> k;
        a[i] = a[i - 1] + k;
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int t1, t2, sum = 0;
        cin >> t1 >> t2;
        cout << a[t2] - a[t1-1] << endl;
    }
    return 0;
}
