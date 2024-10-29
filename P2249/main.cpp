#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    int temp = -999;
    for (int i = 1; i <= n; i++) {
        int k;
        scanf("%d", &k);
        if (k != temp) {
            temp = k;
            mp[k] = i;
        }
    }
    bool isFirst = true;
    for (int i = 1; i <= m; i++) {
        int k;
        scanf("%d", &k);
        if (isFirst) {
            isFirst = false;
        } else {
            cout << " ";
        }
        if (mp.find(k) == mp.end()) {
            cout << -1;
        } else {
            cout << mp[k];
        }
    }
    return 0;
}
