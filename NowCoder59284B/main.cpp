#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        int j = 1;
        while (t > 0) {
            if (t - j > j) {
                cout << j << " ";
                t -= j;
                j++;
                continue;
            }
            cout << t << endl;
            break;
        }
    }
}
