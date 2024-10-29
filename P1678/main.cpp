#include <bits/stdc++.h>
using namespace std;

int s[100005], p[100005];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
    }
    for (int i = 1; i <= m; i++) {
        cin >> p[i];
    }
    sort(s + 1, s + n + 1);
    int t = 0;
    for (int i = 1; i <= m; i++) {
        int l = 0, r = n + 1;
        while (l < r) {
            int mid = (l + r) / 2;
            if (s[mid] <= p[i]) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }

        if (p[i] <= s[1]) {
            t += s[1] - p[i];
        } else {
            t += min(abs(s[l - 1] - p[i]), abs(s[l] - p[i]));
        }
    }
    cout << t;
    return 0;
}
