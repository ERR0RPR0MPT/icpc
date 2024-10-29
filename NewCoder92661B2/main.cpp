#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n << endl;
    int m = n;
    for (int i = n; i >= 2; i--) {
        m = n;
        int ans = 0;
        while (m % i == 0) {
            m /= i;
            ans++;
        }
        if (m == 1) {
            cout << "=" << i << "^" << ans << endl;
        }
    }
}
