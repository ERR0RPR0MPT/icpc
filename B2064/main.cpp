#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        int j = 3, k1 = 1, k2 = 1;
        while (j <= a) {
            int kt = k2;
            k2 += k1;
            k1 = kt;
            j++;
        }
        cout << k2 << endl;
    }
    return 0;
}
