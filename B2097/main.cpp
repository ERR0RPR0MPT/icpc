#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int t = -999, tLen = 0, maxLen = -1;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (t != a) {
            if (maxLen < tLen) {
                maxLen = tLen;
            }
            tLen = 1;
            t = a;
        } else {
            tLen++;
        }
    }
    cout << maxLen << endl;
    return 0;
}
